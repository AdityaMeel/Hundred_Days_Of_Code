/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int sum=0;for(int i=1;i<=n/2;i++)if(n%i==0)sum+=i;puts(n>1&&sum==n?"Perfect number":"Not perfect number");return 0;}
