/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char a[2048],b[2048];int f[256]={0};if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 1;for(int i=0;a[i]&&a[i]!='\n';i++)f[(unsigned char)a[i]]++;for(int i=0;b[i]&&b[i]!='\n';i++)f[(unsigned char)b[i]]--;int ok=1;for(int i=0;i<256;i++)if(f[i])ok=0;puts(ok?"Anagrams":"Not anagrams");return 0;}
