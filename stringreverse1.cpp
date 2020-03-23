#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="Hello World";
	char s2[10][10];
	char *p;
	int i;
	p=strtok(s1," ");
	while(p!='\0')
	{
		strcpy(s2[i],p);
		i++;
		p = strtok(NULL," ");
		printf("%s", s1);
	}
	i--;
	while(i>=0)
	{
		printf("%s ",s2[i]);
		i--;
	}
	
	return 0;
}
