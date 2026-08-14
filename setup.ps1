$ErrorActionPreference = "Stop"
$gccBin = "C:\msys64\mingw64\bin"
if (-not (Test-Path (Join-Path $gccBin "gcc.exe"))) {
    throw "GCC was not found at $gccBin. Install the MSYS2 MinGW-w64 GCC package first."
}
if (($env:Path -split ";") -notcontains $gccBin) { $env:Path = "$gccBin;$env:Path" }
gcc --version | Select-Object -First 1
python --version
