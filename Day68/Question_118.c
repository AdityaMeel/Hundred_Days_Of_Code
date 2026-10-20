/* Problem summary: Challenge task 118; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,x,missing; if(scanf("%d",&n)!=1||n<0)return 1;missing=n;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;missing^=i^x;}printf("%d\n",missing);return 0;}
