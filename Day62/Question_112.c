/* Problem summary: Find the maximum contiguous subarray sum. */
#include <stdio.h>
int main(void){int n,x;if(scanf("%d",&n)!=1||n<1)return 1;if(scanf("%d",&x)!=1)return 1;long long best=x,current=x;for(int i=1;i<n;i++){if(scanf("%d",&x)!=1)return 1;current=current+x>x?current+x:x;if(current>best)best=current;}printf("%lld\n",best);return 0;}
