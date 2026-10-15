/* Problem summary: Challenge task 113; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,k,a[5000];if(scanf("%d",&n)!=1||n<1||n>5000||scanf("%d",&k)!=1||k<1||k>n)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[j]<a[i]){int t=a[i];a[i]=a[j];a[j]=t;}printf("%d\n",a[k-1]);return 0;}
