/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){long long a,b,c;if(scanf("%lld%lld%lld",&a,&b,&c)!=3)return 1;if(a<=0||b<=0||c<=0||a+b<=c||a+c<=b||b+c<=a)puts("Invalid triangle");else if(a==b&&b==c)puts("Equilateral");else if(a==b||a==c||b==c)puts("Isosceles");else puts("Scalene");return 0;}
