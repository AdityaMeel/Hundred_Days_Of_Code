/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;int start=1;for(int i=0;s[i]&&s[i]!='\n';i++){if(!isspace((unsigned char)s[i])&&start){putchar(s[i]);putchar('.');start=0;}else if(isspace((unsigned char)s[i]))start=1;}putchar('\n');return 0;}
