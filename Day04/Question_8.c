/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;if(n<0)return 1;printf("Sum=%lld\n",n*(n+1)/2);return 0;}
