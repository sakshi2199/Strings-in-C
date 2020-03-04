#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10]="ABCD"; 
	char s2[10]="CDAB";
	char s3[10];
	strcpy(s3,s1);
	puts(s3);
	printf("\n");
	char *p;
	strcat(s1,s3);
	puts(s1);
	p=strstr(s1,s2);
	if(p)
	{
		printf("Valid\n");
	}
	else
	{
		printf("Not valid\n");
	}
    puts(p);
	return 0;
}
