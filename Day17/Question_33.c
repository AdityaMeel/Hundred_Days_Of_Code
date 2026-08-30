/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int t=n,d=0;do{d++;t/=10;}while(t);t=n;long long sum=0;do{int x=t%10,p=1;for(int i=0;i<d;i++)p*=x;sum+=p;t/=10;}while(t);puts(n>=0&&sum==n?"Armstrong":"Not Armstrong");return 0;}
