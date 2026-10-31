/* Problem summary: Challenge task 129; see the source site for the statement. */
#include <stdio.h>
int main(void){FILE*f=fopen("numbers.txt","r");if(!f){perror("numbers.txt");return 1;}long long x,sum=0;int n=0;while(fscanf(f,"%lld",&x)==1){sum+=x;n++;}fclose(f);if(!n)return 1;printf("Sum = %lld\nAverage = %.2f\n",sum,(double)sum/n);return 0;}
