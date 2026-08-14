/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){double a,b;if(scanf("%lf%lf",&a,&b)!=2)return 1;if(b==0){printf("Division by zero\n");return 0;}printf("Sum=%.0f, Diff=%.0f, Product=%.0f, Quotient=%.0f\n",a+b,a-b,a*b,a/b);return 0;}
