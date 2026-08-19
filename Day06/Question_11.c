/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;printf("%lld is %s\n",n,n%2==0?"even":"odd");return 0;}
