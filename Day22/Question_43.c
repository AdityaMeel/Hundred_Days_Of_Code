/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int fact(int n){int f=1;for(int i=2;i<=n;i++)f*=i;return f;}
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int t=n,s=0;do{s+=fact(t%10);t/=10;}while(t);puts(n>=0&&s==n?"Strong number":"Not strong number");return 0;}
