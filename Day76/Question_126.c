/* Problem summary: Challenge task 126; see the source site for the statement. */
#include <stdio.h>
int main(void){char name[256];if(scanf("%255s",name)!=1)return 1;FILE*f=fopen(name,"r");if(!f){puts("Error: File does not exist!");return 0;}puts("File opened successfully.");char line[512];while(fgets(line,sizeof line,f))fputs(line,stdout);fclose(f);return 0;}
