/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,x;if(scanf("%d",&n)!=1||n<1)return 1;int mn, mx;if(scanf("%d",&mn)!=1)return 1;mx=mn;for(int i=1;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x<mn)mn=x;if(x>mx)mx=x;}printf("Max=%d, Min=%d\n",mx,mn);return 0;}
