/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
#include <ctype.h>
int main(void){unsigned char c;if(scanf(" %c",(char*)&c)!=1)return 1;if(isupper(c))puts("Uppercase alphabet");else if(islower(c))puts("Lowercase alphabet");else if(isdigit(c))puts("Digit");else puts("Special character");return 0;}
