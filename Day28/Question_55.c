/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1)return 1;int first=1;for(int x=2;x<=n;x++){int p=1;for(int d=2;(long long)d*d<=x;d++)if(x%d==0){p=0;break;}if(p){printf("%s%d",first?"":" ",x);first=0;}}putchar('\n');return 0;}
