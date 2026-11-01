/* Problem summary: Challenge task 130; see the source site for the statement. */
#include <stdio.h>
int main(void){int n,roll,marks;char name[128];if(scanf("%d",&n)!=1||n<0)return 1;FILE*f=fopen("students.txt","w");if(!f)return 1;for(int i=0;i<n;i++){if(scanf("%127s%d%d",name,&roll,&marks)!=3){fclose(f);return 1;}fprintf(f,"%s %d %d\n",name,roll,marks);}fclose(f);f=fopen("students.txt","r");if(!f)return 1;while(fscanf(f,"%127s%d%d",name,&roll,&marks)==3)printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);fclose(f);return 0;}
