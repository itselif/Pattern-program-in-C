#include<stdio.h>
int main()
{
	/* full Pyramid*/

int i,j,space,row;

printf("Enter a number to define the rows: ");
scanf("%d",&row);

for(i=1;i<=row;i++)
{
	for(space=i;space<=row;space++)		/*print the space *2 */
	{
		printf("  ");
	}
	
	for(j=1;j<=2*i-1;j++)			/*Print  the star*/ 
		printf("* ");
		printf("\n");
		
}
		 
	return 0;
}
