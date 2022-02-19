#include<stdio.h>
int main()
{
	/* Inverted half pyramid with numbers*/

	int i,j,row,num;

	printf("Enter a number to define the rows: ");
	scanf("%d",&row);

/*	 num=1;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row;j++)
		printf("%d ",num);
			num++;
			printf("\n");
	}

/*	111111
	22222
	3333
	444
	55
	6	*/

	num=row;
	for(i=1;i<=row;i++)
	{
		for(j=i;j<=row;j++)
		{
			printf("%d ",num);
		}
		num--;
		printf("\n");
	}
/*  666666
	55555
	4444
	333
	22
	1	*/
return 0;
}
