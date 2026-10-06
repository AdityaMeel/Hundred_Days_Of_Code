/* Problem summary: Find the integer whose inclusive prefix and suffix sums match. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1||n<1)return 1;long long total=n*(n+1)/2,lo=1,hi=n,x=-1;while(lo<=hi){long long m=lo+(hi-lo)/2;if(m*m==total){x=m;break;}if(m*m<total)lo=m+1;else hi=m-1;}printf("%lld\n",x);return 0;}
