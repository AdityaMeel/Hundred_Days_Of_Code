/* Problem summary: Challenge task 125; see the source site for the statement. */
#include <stdio.h>
int main(void){FILE*f=fopen("data.txt","a");if(!f){perror("data.txt");return 1;}int c;while((c=getchar())!=EOF)if(fputc(c,f)==EOF){fclose(f);return 1;}if(fclose(f)!=0)return 1;puts("File updated successfully with appended text.");return 0;}
