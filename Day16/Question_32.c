/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;if(n<0){puts("Not palindrome");return 0;}long long t=n,r=0;do{r=r*10+t%10;t/=10;}while(t);puts(r==n?"Palindrome":"Not palindrome");return 0;}
