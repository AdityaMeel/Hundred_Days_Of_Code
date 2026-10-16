/* Problem summary: Challenge task 114; see the source site for the statement. */
#include <stdio.h>
#include <string.h>
int main(void){char s[5000];int last[256];for(int i=0;i<256;i++)last[i]=-1;if(!fgets(s,sizeof s,stdin))return 1;int left=0,best=0;for(int i=0;s[i]&&s[i]!='\n'&&s[i]!='\r';i++){unsigned char c=(unsigned char)s[i];if(last[c]>=left)left=last[c]+1;last[c]=i;if(i-left+1>best)best=i-left+1;}printf("%d\n",best);return 0;}
