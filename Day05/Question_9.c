/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
#include <math.h>
int main(void){double p,r,t;if(scanf("%lf%lf%lf",&p,&r,&t)!=3)return 1;double si=p*r*t/100.0,ci=p*pow(1.0+r/100.0,t)-p;printf("Simple Interest=%.0f, Compound Interest=%g\n",si,ci);return 0;}
