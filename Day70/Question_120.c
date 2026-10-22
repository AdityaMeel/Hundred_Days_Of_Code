/* Problem summary: Challenge task 120; see the source site for the statement. */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[5000];if(!fgets(s,sizeof s,stdin))return 1;int newword=1;for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){unsigned char c=(unsigned char)s[i];if(isalpha(c)){s[i]=(char)(newword?toupper(c):tolower(c));newword=0;}else newword=isspace(c);}puts(s);return 0;}
