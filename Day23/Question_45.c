/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<0)return 1;double sum=0;for(int i=1;i<=n;i++)sum+=(double)(2*i)/(4*i-1);printf("Approximate sum: %.2f\n",sum);return 0;}
