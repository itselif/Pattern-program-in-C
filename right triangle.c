#include<stdio.h>
int main()
{
	/* half pyramid */

	int i,j,row;
	
	printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	for(i=0;i<=row;i++)
	{
		for(j=0;j<=i;j++)
		{
		//printf("%c",kr);
		printf("* ");
		}
		printf("\n");
	}

return 0;
}
