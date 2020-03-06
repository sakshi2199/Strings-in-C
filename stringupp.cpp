#include<stdio.h>
int main()
{
	char s[100], s1[100], a[100];
	int i;
	gets(s);
	for(i=0; a[i]!='\0';i++)
	{
		if(s>='a' && s<='z')
		{
			s[i]= s[i]-32;
		}
		else if(s>='A' && s<='Z')
		{
			s[i]= s[i]+32;
		} 
	}
	return 0;
}

