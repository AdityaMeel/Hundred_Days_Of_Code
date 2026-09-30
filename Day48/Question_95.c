/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char a[1024],b[1024],d[2048];if(!fgets(a,sizeof a,stdin)||!fgets(b,sizeof b,stdin))return 1;a[strcspn(a,"\r\n")]=0;b[strcspn(b,"\r\n")]=0;size_t n=strlen(a);int ok=n==strlen(b);if(ok){strcpy(d,a);strcat(d,a);ok=strstr(d,b)!=NULL;}puts(ok?"Rotation":"Not rotation");return 0;}
