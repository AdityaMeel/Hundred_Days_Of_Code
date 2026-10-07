/* Problem summary: Challenge task 105; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000],candidate=0,count=0;if(scanf("%d",&n)!=1||n<1||n>5000)return 1;for(int i=0;i<n;i++){if(scanf("%d",&a[i])!=1)return 1;if(count==0){candidate=a[i];count=1;}else if(a[i]==candidate)count++;else count--;}count=0;for(int i=0;i<n;i++)if(a[i]==candidate)count++;printf("%d\n",count>n/2?candidate:-1);return 0;}
