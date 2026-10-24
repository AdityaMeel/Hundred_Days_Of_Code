/* Problem summary: Challenge task 122; see the source site for the statement. */
#include <stdio.h>
int main(void){FILE*f=fopen("info.txt","r");if(!f){perror("info.txt");return 1;}char line[512];while(fgets(line,sizeof line,f))fputs(line,stdout);fclose(f);return 0;}
