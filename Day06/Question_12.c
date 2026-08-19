/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;puts(n>0?"Positive":n<0?"Negative":"Zero");return 0;}
