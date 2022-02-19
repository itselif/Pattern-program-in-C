#include<stdio.h>
int main()
{
	/* half pyramid of numbers*/

	int i,j,row,num=1;

	
	printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=i;j++)
		{
		printf("%d ",j);
	
		}
			
		printf("\n");
	}
/*
output=
1
12
123
1234 ... 
*/


/*	for(i=0;i<=row;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",num);
			num++;
		}
		printf("\n");
	}

output=
1
23
456
78910.... */
return 0;
}
