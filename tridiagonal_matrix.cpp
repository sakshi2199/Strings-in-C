#include<stdio.h>
#include<string.h>
int main()
{
    int a[4][4]={1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1},i,j,f1=0,f2=0;
    for(i=0; i<4; i++)
    {
    	for(j=0; j<4; j++)
    	{
    		if( (i==j)|| (i==j+1)|| (j==i+1))
    		{
    			if(a[i][j]==0)
    			{
    				f1=1;
    				break;
				}
			}
			else
			{
				if(a[i][j]!=0)
				{
					f1=1;
					break;
				}
			}
			
		}
		if(f1==1)
		{
			break;
		}
	}
	if(f1==0)
	{
		printf("Tridiagonal");
	}
	else
	{
		printf("Not tridiagonal");
	}
	
	return 0;
}
