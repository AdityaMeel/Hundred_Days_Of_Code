/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){int y;if(scanf("%d",&y)!=1)return 1;puts((y%400==0||(y%4==0&&y%100!=0))?"Leap year":"Not a leap year");return 0;}
