/* Problem summary: Challenge task 116; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000],target;if(scanf("%d",&n)!=1||n<0||n>5000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&target)!=1)return 1;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==target){printf("%d %d\n",i,j);return 0;}puts("-1 -1");return 0;}
