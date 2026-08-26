/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<0)return 1;for(int i=1;i<=n;i++)printf("%s%d",i==1?"":" ",i);putchar('\n');return 0;}
