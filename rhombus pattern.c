#include<stdio.h>
int main()
{
	/* rhombus pattern  */
	
	int i,j,row,space;
	
	printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i=i+2)			/* 2nd way (i%2==1) */ 
	{
		for(space=i;space<row;space++)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}	
		printf("\n");	
	}
	
	for(i=2;i<=row;i=i+2)
	{
		if(row%2==1)
		{
			for(space=1;space<=i;space++)
			{
				printf(" ");
			}
			for(j=i;j<row;j++)
			{
				printf("* ");
			}
				printf("\n");
		}	
		else
		{
			for(space=0;space<=i;space++)
			{
				printf(" ");
			}
			for(j=i+1;j<row;j++)
			{
				printf("* ");
			}
				printf("\n");
		}
	}	
			
	

	
	
	
/*	------*
	----* * * 
	--* * * * * 
	* * * * * * *
	--* * * * *
	----* * *
	------* 	*/

	
	
	
	
	
	
	
	return 0;
}
