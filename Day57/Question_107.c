/* Problem summary: Challenge task 107; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,a[5000];if(scanf("%d",&n)!=1||n<0||n>5000)return 1;for(int i=0;i<n;i++)if(scanf("%d",&a[i])!=1)return 1;for(int i=0;i<n;i++){int x=-1;for(int j=i-1;j>=0;j--)if(a[j]>a[i]){x=a[j];break;}printf("%s%d",i?", ":"",x);}putchar('\n');return 0;}
