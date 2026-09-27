/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
int main(void){char s[2048],target;if(!fgets(s,sizeof s,stdin))return 1;int n=0;while(s[n]&&s[n]!='\n')n++;if(scanf(" %c",&target)!=1)return 1;int count=0;for(int i=0;i<n;i++)if(s[i]==target)count++;printf("%d\n",count);return 0;}
