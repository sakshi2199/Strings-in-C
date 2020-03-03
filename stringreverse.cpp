#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Hello World";
	char *p;
	strrev(s1);
	printf("\n %d", s1);
	p=strtok(s1," ");
	while(p!='\0')
	{
		strrev(p);
		printf("%s ",p);
		p = strtok(NULL," ");
	}
	
	return 0;
}
