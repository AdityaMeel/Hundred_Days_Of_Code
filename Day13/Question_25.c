/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){double a,b;char op;if(scanf("%lf %lf %c",&a,&b,&op)!=3)return 1;switch(op){case '+':printf("%.0f\n",a+b);break;case '-':printf("%.0f\n",a-b);break;case '*':printf("%.0f\n",a*b);break;case '/':if(b==0){puts("Division by zero");break;}printf("%g\n",a/b);break;case '%':if(b==0){puts("Division by zero");break;}printf("%lld\n",(long long)a%(long long)b);break;default:return 1;}return 0;}
