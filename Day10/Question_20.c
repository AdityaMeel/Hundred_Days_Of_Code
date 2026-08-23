/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){int d;if(scanf("%d",&d)!=1)return 1;const char*days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};if(d<1||d>7)return 1;puts(days[d-1]);return 0;}
