/* Problem summary: Multiply the even integers from 1 through n. */
#include <stdio.h>
int main(void){int n;if(scanf("%d",&n)!=1||n<0)return 1;unsigned long long p=1;int first=1;char factors[2048]="";size_t used=0;for(int i=2;i<=n;i+=2){p*=(unsigned)i;int written=snprintf(factors+used,sizeof factors-used,"%s%d",first?"":" * ",i);if(written<0||(size_t)written>=sizeof factors-used)return 1;used+=(size_t)written;first=0;}if(first)puts("1 (no even numbers)");else printf("%llu (%s)\n",p,factors);return 0;}
