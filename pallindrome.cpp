#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100]="aba";
	char s2[100];
    int i,l,j;
    for(i=0;s1[i]!='\0';i++)
    {
        scanf("%c",&s1[i]);
    }
    strcpy(s2,s1);
    l=strlen(s1);
    for(i=l-1;i>=0;i--)
    {
    	s1[l-i-1]=s2[i];
    }
    s1[l]='\0';
    if(strcmp(s1,s2)==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}

