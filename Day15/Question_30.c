/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;int neg=n<0;if(neg)n=-n;long long r=0;do{r=r*10+n%10;n/=10;}while(n);printf("%s%lld\n",neg?"-":"",r);return 0;}
