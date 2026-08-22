/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
#include <math.h>
int main(void){double a,b,c;if(scanf("%lf%lf%lf",&a,&b,&c)!=3||a==0)return 1;double d=b*b-4*a*c;if(d>0){double x1=(-b+sqrt(d))/(2*a),x2=(-b-sqrt(d))/(2*a);printf("Roots are real and different: %.0f, %.0f\n",x1,x2);}else if(d==0)printf("Roots are real and same: %.0f\n",-b/(2*a));else puts("Roots are complex");return 0;}
