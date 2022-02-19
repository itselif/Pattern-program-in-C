#include<stdio.h>
int main()
{
	/* Program to print the full Pyramid of Star in 180 degree */
	
	int i,j,row;

    printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	for(i=0;i<=row;i++)
	{
			for(j=0;j<=i;j++)
			{
			printf("* ");
			}
		printf("\n");
		
	}
		
	for(i=0;i<=row;i++)
	{
		for (j=i;j<row;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/* 
	*
	**
	***
	****
	***
	**
	*
	*/
	
	
	
	
	
	return 0;
}
