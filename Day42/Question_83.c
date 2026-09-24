/* Problem summary: See linked challenge source for the full prompt. */
#include <stdio.h>
#include <ctype.h>
int main(void){char s[2048];if(!fgets(s,sizeof s,stdin))return 1;int v=0,c=0;for(int i=0;s[i]&&s[i]!='\n';i++)if(isalpha((unsigned char)s[i])){char x=(char)tolower((unsigned char)s[i]);if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')v++;else c++;}printf("Vowels=%d, Consonants=%d\n",v,c);return 0;}
