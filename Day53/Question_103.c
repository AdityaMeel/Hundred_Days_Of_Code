/* Problem summary: Challenge task 103; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000];long long total=0,left=0;if(scanf("%d",&n)!=1||n<0||n>5000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a[i])!=1)return 1;total+=a[i];}for(int i=0;i<n;i++){if(left==total-left-a[i]){printf("%d\n",i);return 0;}left+=a[i];}puts("-1");return 0;}
