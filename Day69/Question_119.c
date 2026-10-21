/* Problem summary: Challenge task 119; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,x,seen[200001]={0};if(scanf("%d",&n)!=1||n<1||n>200000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;int v=x<0?-x:x;if(v>200000)return 1;if(seen[v]){printf("%d\n",x);return 0;}seen[v]=1;}puts("-1");return 0;}
