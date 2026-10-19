/* Problem summary: Challenge task 117; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,m,a[5000],b[5000],i=0,j=0;if(scanf("%d%d",&n,&m)!=2||n<0||m<0||n+m>5000)return 1;for(int x=0;x<n;x++)if(scanf("%d",&a[x])!=1)return 1;for(int x=0;x<m;x++)if(scanf("%d",&b[x])!=1)return 1;int first=1;while(i<n||j<m){int x;if(j==m||(i<n&&a[i]<=b[j]))x=a[i++];else x=b[j++];printf("%s%d",first?"":" ",x);first=0;}putchar('\n');return 0;}
