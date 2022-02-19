#include<stdio.h>
int main()
{
	/* empty square */
	
    int i,j,row;
	
	printf("Enter the side of the square: ");
	scanf("%d",&row);
	// (row=column)
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=row;j++)
		{
			if (i==1 || i==row)		/* first and last row*/
			{
			printf("* ");			/* asterisks in the first and last row */
			} 
			else if (j==1 || j==row)	/* first and last column */
			{
				printf("* ");		/* asterisk in the first and last column*/
			}
			else printf("  ");		/* spaces inside the square */
		}
	
		 printf("\n");
	} 
    
        

/* 
	* * * * *
	*       *
	*       *
	*       *
	* * * * *	*/
	
	return 0;
}
