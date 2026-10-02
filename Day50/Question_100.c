/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char s[512];if(scanf("%511s",s)!=1)return 1;size_t n=strlen(s);int first=1;for(size_t i=0;i<n;i++)for(size_t j=i+1;j<=n;j++){if(!first)putchar(',');for(size_t k=i;k<j;k++)putchar(s[k]);first=0;}putchar('\n');return 0;}
