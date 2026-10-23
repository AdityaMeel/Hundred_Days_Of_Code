/* Problem summary: Challenge task 121; see the source site for the statement. */
#include <stdio.h>
int main(void){char name[128];int age;if(scanf("%127s%d",name,&age)!=2)return 1;FILE*f=fopen("info.txt","w");if(!f){perror("info.txt");return 1;}fprintf(f,"Name: %s\nAge: %d\n",name,age);if(fclose(f)!=0)return 1;puts("File created successfully! Data written to info.txt");return 0;}
