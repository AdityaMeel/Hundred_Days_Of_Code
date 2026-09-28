/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[2048];int f[26]={0};if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i]&&s[i]!='\n';i++)if(s[i]>='a'&&s[i]<='z'&&f[s[i]-'a']++) {putchar(s[i]);putchar('\n');return 0;}puts("No repeating lowercase letter");return 0;}
