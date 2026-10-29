/* Problem summary: Convert lowercase text in input.txt to uppercase in output.txt. */
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*a=fopen("input.txt","r");if(!a){perror("input.txt");return 1;}FILE*b=fopen("output.txt","w");if(!b){fclose(a);perror("output.txt");return 1;}int c;while((c=fgetc(a))!=EOF)if(fputc(toupper((unsigned char)c),b)==EOF){fclose(a);fclose(b);return 1;}fclose(a);fclose(b);b=fopen("output.txt","r");if(!b)return 1;printf("Output File (output.txt): ");while((c=fgetc(b))!=EOF)putchar(c);fclose(b);return 0;}
