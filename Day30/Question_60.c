/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,x,p=0,neg=0,z=0;if(scanf("%d",&n)!=1||n<0)return 1;for(int i=0;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x>0)p++;else if(x<0)neg++;else z++;}printf("Positive=%d, Negative=%d, Zero=%d\n",p,neg,z);return 0;}
