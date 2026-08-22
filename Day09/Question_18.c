/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
int main(void){int p;if(scanf("%d",&p)!=1)return 1;if(p<0||p>100)return 1;puts(p>=90?"Grade A":p>=80?"Grade B":p>=70?"Grade C":p>=60?"Grade D":"Grade F");return 0;}
