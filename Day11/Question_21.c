/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){int m;if(scanf("%d",&m)!=1)return 1;const char*n[]={"January","February","March","April","May","June","July","August","September","October","November","December"};const int d[]={31,28,31,30,31,30,31,31,30,31,30,31};if(m<1||m>12)return 1;printf("%s, %d days\n",n[m-1],d[m-1]);return 0;}
