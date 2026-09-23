/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;int n=0;while(s[n]&&s[n]!='\n'&&s[n]!='\r')n++;printf("%d\n",n);return 0;}
