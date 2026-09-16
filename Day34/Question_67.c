/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a[2001],pos,x;if(scanf("%d",&n)!=1||n<0||n>=2001)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d%d",&pos,&x)!=2||pos<0||pos>n)return 1;for(int i=n;i>pos;i--)a[i]=a[i-1];a[pos]=x;for(int i=0;i<=n;i++)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
