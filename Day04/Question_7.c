/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long a,b;if(scanf("%lld%lld",&a,&b)!=2)return 1;/* XOR swap avoids overflow. */a^=b;b^=a;a^=b;printf("After swap: %lld %lld\n",a,b);return 0;}
