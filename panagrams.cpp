#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="abcdefghijklmnopqrstuvwxyz";
	int f1[26]={0};
	int i,b=0;
	strlwr(s1);
    for(i=0; s1[i]!='\0'; i++)
    {
    	f1[s1[i]-97]++; 
	}
	for(i=0;i<26;i++)
	{
		if(f1[i]==0)
		{
			break;
		}
		
	}
	if(i==26)
	{
		printf("Panagram");
	}
	else
	{
		printf("Not Panagram");
	}
	return 0;
}
