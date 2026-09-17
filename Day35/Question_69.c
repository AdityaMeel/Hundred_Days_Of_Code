/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int n,x,largest,second=0,has=0;if(scanf("%d",&n)!=1||n<2)return 1;if(scanf("%d",&largest)!=1)return 1;for(int i=1;i<n;i++){if(scanf("%d",&x)!=1)return 1;if(x>largest){second=largest;largest=x;has=1;}else if(x<largest&&(!has||x>second)){second=x;has=1;}}if(has)printf("%d\n",second);else puts("-1");return 0;}
