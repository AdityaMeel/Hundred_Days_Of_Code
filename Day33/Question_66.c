/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a[2001],x;if(scanf("%d",&n)!=1||n<0||n>=2001)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;int i=n-1;while(i>=0&&a[i]>x){a[i+1]=a[i];i--;}a[i+1]=x;for(int j=0;j<=n;j++)printf("%s%d",j?" ":"",a[j]);putchar('\n');return 0;}
