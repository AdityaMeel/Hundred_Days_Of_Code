/* Problem summary: Challenge task 124; see the source site for the statement. */
#include <stdio.h>
int main(void){char src[256],dst[256];if(scanf("%255s%255s",src,dst)!=2)return 1;FILE*a=fopen(src,"r");if(!a){perror(src);return 1;}FILE*b=fopen(dst,"w");if(!b){fclose(a);perror(dst);return 1;}int ch;while((ch=fgetc(a))!=EOF)if(fputc(ch,b)==EOF){fclose(a);fclose(b);return 1;}fclose(a);fclose(b);printf("File copied successfully to %s\n",dst);return 0;}
