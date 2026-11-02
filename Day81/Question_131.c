/* Problem summary: Challenge task 131; see the source site for the statement. */
#include <stdio.h>
enum Day { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };
int main(void){const char*names[]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};for(int i=0;i<7;i++)printf("%s = %d\n",names[i],i);return 0;}
