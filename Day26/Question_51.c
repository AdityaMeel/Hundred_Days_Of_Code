/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){for(int i=1;i<=5;i++){for(int s=0;s<5-i;s++)putchar(' ');for(int j=6-i;j<=5;j++)printf("%d",j);putchar('\n');}return 0;}
