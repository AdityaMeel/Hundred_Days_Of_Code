/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[256];if(scanf("%255s",s)!=1)return 1;for(int i=0;s[i];i++){if(s[i]!='0'&&s[i]!='1')return 1;s[i]=s[i]=='0'?'1':'0';}puts(s);return 0;}
