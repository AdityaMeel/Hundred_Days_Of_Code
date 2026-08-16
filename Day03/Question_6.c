/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long a,b,t;if(scanf("%lld%lld",&a,&b)!=2)return 1;t=a;a=b;b=t;printf("After swap: %lld %lld\n",a,b);return 0;}
