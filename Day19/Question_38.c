/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;int s=0;do{s+=(int)(n%10);n/=10;}while(n);printf("%d\n",s);return 0;}
