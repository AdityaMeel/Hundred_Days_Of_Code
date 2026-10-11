/* Problem summary: Challenge task 109; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,k,a[5000];if(scanf("%d",&n)!=1||n<1||n>5000||scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;long long sum=0;for(int i=0;i<k;i++)sum+=a[i];long long best=sum;for(int i=k;i<n;i++){sum+=a[i]-a[i-k];if(sum>best)best=sum;}printf("%lld\n",best);return 0;}
