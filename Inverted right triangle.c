#include<stdio.h>
int main()
{
	/* Inverted half pyramid of */
	
	int i,j,row;
	
	printf("Enter the number of rows: ");
    scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row;j++)
		{
			printf("* ");
		}
		
		printf("\n");
	}



return 0;
}
