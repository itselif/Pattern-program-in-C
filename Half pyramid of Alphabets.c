#include<stdio.h>
int main()
{
	/* Half pyramid of Alphabets */

	int i,j,row;
	char alphabet='A';

	printf("Enter a number to define the rows: ");
	scanf("%d",&row);

	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",alphabet);
		}
		alphabet++;
		printf("\n");
	}



	return 0;
}
