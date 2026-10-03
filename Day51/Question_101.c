/* Problem summary: Challenge task 101; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000],x;if(scanf("%d",&n)!=1||n<0||n>5000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int first=-1,last=-1;for(int i=0;i<n;i++)if(a[i]==x){if(first<0)first=i;last=i;}printf("%d,%d\n",first,last);return 0;}
