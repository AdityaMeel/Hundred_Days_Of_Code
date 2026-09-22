/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int r,k,b[100][100];long long a[100][100];if(scanf("%d%d",&r,&k)!=2||r<1||k<1||r>100||k>100)return 1;for(int i=0;i<r;i++)for(int j=0;j<k;j++)if(scanf("%lld",&a[i][j])!=1)return 1;int k2,c2;if(scanf("%d%d",&k2,&c2)!=2||k2!=k||c2<1||c2>100)return 1;for(int i=0;i<k;i++)for(int j=0;j<c2;j++)if(scanf("%d",&b[i][j])!=1)return 1;for(int i=0;i<r;i++){for(int j=0;j<c2;j++){long long s=0;for(int x=0;x<k;x++)s+=a[i][x]*b[x][j];printf("%s%lld",j?" ":"",s);}putchar('\n');}return 0;}

