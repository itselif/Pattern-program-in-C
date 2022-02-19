#include<stdio.h>
int main()
{
	/* Inverted full pyramid of * */
	
	int i,j,row,space;
	
	printf("Enter the number of rows: ");
   	scanf("%d", &row);
	
	for(i=1;i<=row;i++)
	{
		for(space=0;space<i;space++)
		{
			printf(" ");
		}
		for(j=i;j<=row;j++)
		{
			printf("* ");
			
		}printf("\n");
	}
	
	
	
	
/*	*****
	-***
	--*	*/
	
	return 0;
}
