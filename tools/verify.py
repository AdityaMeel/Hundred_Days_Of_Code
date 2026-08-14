#!/usr/bin/env python3
"""Compile each solution independently and run the challenge sample cases."""
from __future__ import annotations
import argparse, json, pathlib, shutil, subprocess, sys, tempfile

ROOT = pathlib.Path(__file__).resolve().parents[1]
SAMPLES_FILE = ROOT / "tests" / "samples.json"
BUILD = ROOT / "build"
REPORT = ROOT / "verification-report.json"
CC = shutil.which("gcc") or (r"C:\msys64\mingw64\bin\gcc.exe" if pathlib.Path(r"C:\msys64\mingw64\bin\gcc.exe").exists() else None)


def main() -> int:
    parser = argparse.ArgumentParser()
    parser.add_argument("--questions", help="Comma-separated question IDs to verify")
    args = parser.parse_args()
    selected = {x.strip() for x in args.questions.split(",")} if args.questions else None
    sample_data = json.loads(SAMPLES_FILE.read_text(encoding="utf-8"))
    samples = sample_data["questions"]
    results = []
    sources = sorted(p for p in ROOT.glob("Day[0-9][0-9]/Question_*.c") if selected is None or p.stem.removeprefix("Question_") in selected)
    for src in sources:
        qid = src.stem.removeprefix("Question_")
        exe = BUILD / f"{src.parent.name}_{src.stem}.exe"
        BUILD.mkdir(exist_ok=True)
        if not CC:
            results.append({"file":str(src.relative_to(ROOT)),"compile":"unavailable","samples":[]})
            continue
        comp = subprocess.run([CC,"-std=c11","-Wall","-Wextra","-pedantic",str(src),"-o",str(exe)],capture_output=True,text=True,encoding="utf-8")
        row={"file":str(src.relative_to(ROOT)),"compile":"passed" if comp.returncode==0 else "failed","compiler_output":(comp.stderr+comp.stdout).strip(),"samples":[]}
        if comp.returncode==0:
            for i,case in enumerate(samples.get(qid,[]),1):
                if case["output"].startswith(("Note:", "Pattern with")):
                    row["samples"].append({"case":i,"status":"skipped","reason":"Source provides descriptive note instead of a concrete expected output"})
                    continue
                with tempfile.TemporaryDirectory(prefix="c11-sample-") as temp:
                    cwd = pathlib.Path(temp)
                    for filename, contents in case.get("files", {}).items():
                        (cwd / filename).write_text(contents, encoding="utf-8")
                    run=subprocess.run([str(exe)],input=case["input"],capture_output=True,text=True,encoding="utf-8",timeout=5,cwd=cwd)
                    actual=run.stdout.replace("\r\n","\n").rstrip("\n")
                    expected=case["output"].replace("\r\n","\n").rstrip("\n")
                    files_ok = all((cwd/name).exists() and (cwd/name).read_text(encoding="utf-8")==contents for name,contents in case.get("expected_files",{}).items())
                    passed = run.returncode==0 and actual==expected and files_ok
                    row["samples"].append({"case":i,"status":"passed" if passed else "failed","expected":expected,"actual":actual,"returncode":run.returncode,"expected_files_ok":files_ok})
        results.append(row)
    report={"compiler":CC or "not found","flags":["-std=c11","-Wall","-Wextra","-pedantic"],"source_files_found":len(sources),"source_files_expected":132,"compiled":sum(x["compile"]=="passed" for x in results),"compile_failures":sum(x["compile"]=="failed" for x in results),"sample_cases_run":sum(len(x["samples"]) for x in results),"sample_passes":sum(c["status"]=="passed" for x in results for c in x["samples"]),"sample_skipped":sum(c["status"]=="skipped" for x in results for c in x["samples"]),"sample_failures":sum(c["status"]=="failed" for x in results for c in x["samples"]),"files":results}
    REPORT.write_text(json.dumps(report,indent=2,ensure_ascii=False)+"\n",encoding="utf-8")
    print(json.dumps({k:v for k,v in report.items() if k!="files"},indent=2))
    return 0 if len(sources)==132 and report["compiled"]==132 and report["sample_failures"]==0 else 1

if __name__ == "__main__":
    sys.exit(main())
