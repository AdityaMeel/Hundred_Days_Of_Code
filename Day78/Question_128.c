/* Problem summary: Challenge task 128; see the source site for the statement. */
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*f=fopen("text.txt","r");if(!f){perror("text.txt");return 1;}int c,v=0,con=0;while((c=fgetc(f))!=EOF)if(isalpha((unsigned char)c)){c=tolower((unsigned char)c);if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')v++;else con++;}fclose(f);printf("Vowels: %d\nConsonants: %d\n",v,con);return 0;}
