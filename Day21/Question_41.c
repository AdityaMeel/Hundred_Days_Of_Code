/* Problem summary: Swap the leading and trailing decimal digits. */
#include <stdio.h>
#include <string.h>
int main(void){char s[128];if(scanf("%127s",s)!=1)return 1;size_t n=strlen(s);size_t first=s[0]=='-'?1:0;size_t last=n-1;if(last>first){char c=s[first];s[first]=s[last];s[last]=c;}puts(s);return 0;}
