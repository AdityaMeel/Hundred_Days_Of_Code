/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <stdlib.h>
int main(void){int a,b;if(scanf("%d%d",&a,&b)!=2)return 1;int x=abs(a),y=abs(b);while(y){int t=x%y;x=y;y=t;}printf("%d\n",x);return 0;}
