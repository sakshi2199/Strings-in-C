#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="creative";
	char s2[]="reactive";
	int f1[26]={0}, f2[26]={0};
	int i;
	strlwr(s1);
	strlwr(s2);
    for(i=0; s1[i]!='\0'; i++)
    {
    	f1[s1[i]-97]++; 
	}
	for(i=0; s2[i]!='\0'; i++)
	{
	    f2[s2[i]-97]++; 
	}
	for(i=0;i<26;i++)
	{
		if(f1[i]!=f2[i])
		{
			break;
		}
	}
	if(i==26)
	{
		printf("Both words are anagrams");
	}
	else
	{
		printf("Both words aren't anagrams");
	}
	return 0;
}
