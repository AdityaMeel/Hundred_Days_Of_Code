/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a;long long s=0;if(scanf("%d",&n)!=1||n<0)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a)!=1)return 1;s+=a;}printf("%lld\n",s);return 0;}
