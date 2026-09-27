/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;for(int i=0;s[i]&&s[i]!='\n';i++){if(s[i]>='a'&&s[i]<='z')s[i]=(char)(s[i]-32);else if(s[i]>='A'&&s[i]<='Z')s[i]=(char)(s[i]+32);}printf("%s",s);return 0;}
