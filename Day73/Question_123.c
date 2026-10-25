/* Problem summary: Challenge task 123; see the source site for the statement. */
#include <stdio.h>
#include <ctype.h>
int main(void){FILE*f=fopen("sample.txt","r");if(!f){perror("sample.txt");return 1;}int c,prevspace=1,lines=0,words=0,chars=0,last='\n';while((c=fgetc(f))!=EOF){chars++;if(c=='\n')lines++;if(isspace((unsigned char)c))prevspace=1;else{if(prevspace)words++;prevspace=0;}last=c;}if(chars>0&&last!='\n')lines++;fclose(f);printf("Characters: %d\nWords: %d\nLines: %d\n",chars,words,lines);return 0;}
