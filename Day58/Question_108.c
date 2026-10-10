/* Problem summary: Challenge task 108; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000];long long pre[5001],suf[5001];if(scanf("%d",&n)!=1||n<0||n>5000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;pre[0]=1;for(int i=0;i<n;i++)pre[i+1]=pre[i]*a[i];suf[n]=1;for(int i=n-1;i>=0;i--)suf[i]=suf[i+1]*a[i];putchar('[');for(int i=0;i<n;i++)printf("%s%lld",i?",":"",pre[i]*suf[i+1]);puts("]");return 0;}
