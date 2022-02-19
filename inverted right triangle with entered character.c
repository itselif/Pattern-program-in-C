#include<stdio.h>
int main()
{
	/* Inverted half pyramid of entered character */
	
	int i,j,row;
	char ch;
	
	printf("Enter a character to define the rows: ");
	scanf("%s",&ch);
	
	printf("Enter the number of rows: ");
    scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row;j++)
		{
			printf("%c ",ch);
		}
		
		printf("\n");
	}



return 0;
}
