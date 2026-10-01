/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){char s[2048],words[128][128];int n=0;if(!fgets(s,sizeof s,stdin))return 1;char *p=strtok(s," \t\r\n");while(p&&n<128){snprintf(words[n++],128,"%s",p);p=strtok(NULL," \t\r\n");}if(n==0)return 0;for(int i=0;i<n-1;i++)printf("%c.",words[i][0]);printf(" %s\n",words[n-1]);return 0;}
