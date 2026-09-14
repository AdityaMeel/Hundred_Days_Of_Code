/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,m,a[2000],x;if(scanf("%d",&n)!=1||n<0||n>2000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&m)!=1||m<0||n+m>2000)return 1;for(int i=0;i<m;i++){if(scanf("%d",&x)!=1)return 1;a[n+i]=x;}for(int i=0;i<n+m;i++)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
