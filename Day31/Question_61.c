/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,a[2000],x;if(scanf("%d",&n)!=1||n<0||n>2000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;if(scanf("%d",&x)!=1)return 1;for(int i=0;i<n;i++)if(a[i]==x){printf("Found at index %d\n",i);return 0;}puts("-1");return 0;}
