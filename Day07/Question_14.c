/* Problem summary: See the linked challenge question for the original statement. */
#include <stdio.h>
#include <ctype.h>
int main(void){char c;if(scanf(" %c",&c)!=1)return 1;c=(char)tolower((unsigned char)c);puts(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'?"Vowel":"Consonant");return 0;}
