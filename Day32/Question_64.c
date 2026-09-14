/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){long long n;int f[10]={0};if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;do{f[n%10]++;n/=10;}while(n);int best=0;for(int i=1;i<10;i++)if(f[i]>f[best])best=i;printf("%d\n",best);return 0;}
