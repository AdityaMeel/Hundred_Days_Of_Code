/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){double cp,sp;if(scanf("%lf%lf",&cp,&sp)!=2||cp==0)return 1;if(sp>cp)printf("Profit %.0f%%\n",(sp-cp)*100/cp);else if(sp<cp)printf("Loss %.0f%%\n",(cp-sp)*100/cp);else puts("No Profit No Loss");return 0;}
