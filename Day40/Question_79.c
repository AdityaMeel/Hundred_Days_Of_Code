/* Problem summary: Print matrix elements along alternating diagonals. */
#include <stdio.h>
int main(void){int r,c,a[100][100];if(scanf("%d%d",&r,&c)!=2||r<1||c<1||r>100||c>100)return 1;for(int i=0;i<r;i++)for(int j=0;j<c;j++)if(scanf("%d",&a[i][j])!=1)return 1;int first=1;for(int d=0;d<r+c-1;d++){int lo=d-c+1;if(lo<0)lo=0;int hi=d<r?d:r-1;if(d%2==0){for(int i=hi;i>=lo;i--){printf("%s%d",first?"":" ",a[i][d-i]);first=0;}}else{for(int i=lo;i<=hi;i++){printf("%s%d",first?"":" ",a[i][d-i]);first=0;}}}putchar('\n');return 0;}
