/* Problem summary: Multiply odd digits and show the product. */
#include <stdio.h>
int main(void){long long n;if(scanf("%lld",&n)!=1)return 1;if(n<0)n=-n;int d[32],k=0;do{d[k++]=(int)(n%10);n/=10;}while(n);long long p=1;int first=1;char factors[128]="";size_t used=0;for(int i=k-1;i>=0;i--)if(d[i]%2){int z=snprintf(factors+used,sizeof factors-used,"%s%d",first?"":"*",d[i]);if(z<0||(size_t)z>=sizeof factors-used)return 1;used+=(size_t)z;p*=d[i];first=0;}if(first)puts("1 (no odd digits, assume 1)");else printf("%lld (%s)\n",p,factors);return 0;}
