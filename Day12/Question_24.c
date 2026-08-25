/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long u;long long bill=0;if(scanf("%lld",&u)!=1||u<0)return 1;long long n=u<100?u:100;bill+=n*5;u-=n;n=u<100?u:100;bill+=n*7;u-=n;n=u<100?u:100;bill+=n*10;u-=n;bill+=u*12;printf("Bill: ₹%lld\n",bill);return 0;}
