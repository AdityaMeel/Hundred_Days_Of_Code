/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;size_t n=strcspn(s,"\r\n");for(size_t i=n;i>0;i--)putchar(s[i-1]);putchar('\n');return 0;}
