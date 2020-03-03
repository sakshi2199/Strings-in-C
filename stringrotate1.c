#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="A quick brown fox jumps over a lazy dog";
	char *p;
	int i;
    p=strtok(s1," ");
    while(p)
    {
    	printf("%s\t%d\n",p,strlen(p));
    	p=strtok(NULL," ");
	}
	
	return 0;
}
