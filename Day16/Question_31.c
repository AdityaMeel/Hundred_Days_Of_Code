/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){unsigned int n;if(scanf("%u",&n)!=1)return 1;char b[33];int k=0;if(n==0)b[k++]='0';while(n){b[k++]=(char)('0'+n%2);n/=2;}while(k)putchar(b[--k]);putchar('\n');return 0;}
