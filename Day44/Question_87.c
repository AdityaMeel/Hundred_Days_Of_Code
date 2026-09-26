/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;int sp=0,d=0,other=0;for(int i=0;s[i]&&s[i]!='\n';i++){unsigned char c=(unsigned char)s[i];if(c==' ')sp++;else if(isdigit(c))d++;else if(!isalpha(c))other++;}printf("Spaces=%d, Digits=%d, Special=%d\n",sp,d,other);return 0;}
