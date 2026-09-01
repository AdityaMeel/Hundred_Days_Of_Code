/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <stdlib.h>
int main(void){long long a,b;if(scanf("%lld%lld",&a,&b)!=2)return 1;long long x=a<0?-a:a,y=b<0?-b:b,u=x,v=y;while(v){long long t=u%v;u=v;v=t;}printf("%lld\n",u?x/u*y:0);return 0;}
