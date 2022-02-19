#include<stdio.h>
int main()
{
	
	/*print the full Pyramid of Star in the opposite direction*/
	
	int i,j,row,space;

    printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	for(i=0;i<=row;i++)
	{
		for(space=i;space<=row;space++)
		{
			printf(" ");
		}
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	for(i=1;i<=row;i++)
	{
		for(space=0;space<=i;space++)
		{
			printf(" ");
		}
		for(j=i;j<=row;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	
	/* 
	    *
	   **
	  ***
	 ****
	*****
	 **** 
	  ***
	   **
	    *   */
	return 0;
}
