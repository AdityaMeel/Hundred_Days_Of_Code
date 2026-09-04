/* Problem summary: Sum the specified odd-numerator fraction series. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<0)return 1;double sum=n>0?1.0:0.0;for(int i=2;i<=n;i++)sum+=(double)(2*i-1)/(2*i);printf("Approximate sum: %.1f\n",sum);return 0;}
