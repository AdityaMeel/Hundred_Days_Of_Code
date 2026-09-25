/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <string.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;size_t n=strcspn(s,"\r\n");int ok=1;for(size_t i=0;i<n/2;i++)if(s[i]!=s[n-1-i])ok=0;puts(ok?"Palindrome":"Not palindrome");return 0;}
