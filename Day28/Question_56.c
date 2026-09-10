/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a[2000];if(scanf("%d",&n)!=1||n<0||n>2000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n;i++)printf("%s%d",i?" ":"",a[i]);putchar('\n');return 0;}
