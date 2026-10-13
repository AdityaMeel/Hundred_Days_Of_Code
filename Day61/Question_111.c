/* Problem summary: Challenge task 111; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,k,a[5000];if(scanf("%d",&n)!=1||n<1||n>5000||scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<=n-k;i++){int x=0;for(int j=i;j<i+k;j++)if(a[j]<0){x=a[j];break;}printf("%s%d",i?" ":"",x);}putchar('\n');return 0;}
