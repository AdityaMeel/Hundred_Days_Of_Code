/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;int j=0;for(int i=0;s[i]&&s[i]!='\n';i++){char c=(char)tolower((unsigned char)s[i]);if(c!='a'&&c!='e'&&c!='i'&&c!='o'&&c!='u')s[j++]=s[i];}s[j]='\0';puts(s);return 0;}
