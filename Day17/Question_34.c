/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int prime=n>=2;for(int d=2;(long long)d*d<=n&&prime;d++)if(n%d==0)prime=0;puts(prime?"Prime":"Not prime");return 0;}
