/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long a,b,c;if(scanf("%lld%lld%lld",&a,&b,&c)!=3)return 1;long long m=a>b?a:b;if(c>m)m=c;printf("Largest is %lld\n",m);return 0;}
