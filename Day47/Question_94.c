/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char s[2048],best[2048];if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\r\n")]='\0';best[0]='\0';char *p=strtok(s," \t");while(p){if(strlen(p)>strlen(best))strcpy(best,p);p=strtok(NULL," \t");}puts(best);return 0;}
