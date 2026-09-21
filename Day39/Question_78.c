/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,m,x;long long s=0;if(scanf("%d%d",&n,&m)!=2||n!=m||n<1)return 1;for(int i=0;i<n;i++)for(int j=0;j<n;j++){if(scanf("%d",&x)!=1)return 1;if(i==j)s+=x;}printf("%lld\n",s);return 0;}
