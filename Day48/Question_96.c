/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;s[strcspn(s,"\r\n")]=0;int n=(int)strlen(s),i=0;while(i<n){while(i<n&&s[i]==' ')putchar(s[i++]);int st=i;while(i<n&&s[i]!=' ')i++;for(int j=i-1;j>=st;j--)putchar(s[j]);}putchar('\n');return 0;}
