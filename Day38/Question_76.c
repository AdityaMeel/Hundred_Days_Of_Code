/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,m,a[100][100],ok=1;if(scanf("%d%d",&n,&m)!=2||n!=m||n<1||n>100)return 1;for(int i=0;i<n;i++)for(int j=0;j<n;j++)if(scanf("%d",&a[i][j])!=1)return 1;for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i][j]!=a[j][i])ok=0;puts(ok?"True":"False");return 0;}
