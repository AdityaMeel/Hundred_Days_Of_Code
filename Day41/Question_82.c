/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++)printf("%c\n",s[i]);return 0;}
