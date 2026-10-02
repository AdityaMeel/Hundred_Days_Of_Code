/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){int d,m,y;if(scanf("%d/%d/%d",&d,&m,&y)!=3)return 1;const char*months[]={"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};if(m<1||m>12)return 1;printf("%02d-%s-%04d\n",d,months[m-1],y);return 0;}
