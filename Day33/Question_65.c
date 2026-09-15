/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a[2000],x;if(scanf("%d",&n)!=1||n<0||n>2000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int l=0,r=n-1;while(l<=r){int m=l+(r-l)/2;if(a[m]==x){while(m>0&&a[m-1]==x)m--;printf("Found at index %d\n",m);return 0;}if(a[m]<x)l=m+1;else r=m-1;}puts("-1");return 0;}
