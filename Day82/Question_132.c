/* Problem summary: Challenge task 132; see the source site for the statement. */
#include <stdio.h>
#include <string.h>
enum Traffic { RED, YELLOW, GREEN };
int main(void){char input[32];if(scanf("%31s",input)!=1)return 1;enum Traffic light;if(strcmp(input,"RED")==0)light=RED;else if(strcmp(input,"YELLOW")==0)light=YELLOW;else if(strcmp(input,"GREEN")==0)light=GREEN;else return 1;switch(light){case RED:puts("Stop");break;case YELLOW:puts("Wait");break;case GREEN:puts("Go");break;}return 0;}
