/* Problem summary: Challenge task 115; see the source site for the statement. */
#include <stdio.h>
int main(void){char s[5000],t[5000];int f[26]={0};if(!fgets(s,sizeof s,stdin)||!fgets(t,sizeof t,stdin))return 1;int n=0,m=0;for(int i=0;s[i]&&s[i]!='\n';i++){if(s[i]<'a'||s[i]>'z')return 1;f[s[i]-'a']++;n++;}for(int i=0;t[i]&&t[i]!='\n';i++){if(t[i]<'a'||t[i]>'z')return 1;f[t[i]-'a']--;m++;}int ok=n==m;for(int i=0;i<26;i++)if(f[i])ok=0;puts(ok?"Anagram":"Not Anagram");return 0;}
