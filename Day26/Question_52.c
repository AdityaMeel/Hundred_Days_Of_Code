/* Problem summary: Print a spaced five-row star diamond. */
#include <stdio.h>
int main(void){int rows[]={1,3,5,3,1};for(int r=0;r<5;r++){for(int j=0;j<rows[r];j++)putchar('*');putchar('\n');if(r<4)putchar('\n');}return 0;}
