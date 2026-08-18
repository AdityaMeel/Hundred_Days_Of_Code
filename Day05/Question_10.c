/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long s;if(scanf("%lld",&s)!=1||s<0)return 1;printf("%lld:%lld:%lld\n",s/3600,(s%3600)/60,s%60);return 0;}
