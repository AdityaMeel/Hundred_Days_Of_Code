/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){int d;if(scanf("%d",&d)!=1||d<0)return 1;if(d>30)puts("Membership Cancelled");else{int f=(d<5?d:5)*2;if(d>5)f+=(d<10?d-5:5)*4;if(d>10)f+=(d<30?d-10:20)*6;printf("Fine ₹%d\n",f);}return 0;}
