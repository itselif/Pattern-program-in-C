#include<stdio.h>
int main()
{
	/* Kullanici tarafindan girilen herhangi bir karakterle piramit olusturma */
	
	int star,i,j,space,row;
	char kr;

	printf("Enter a character to define the rows: ");
	scanf("%s",&kr);
	
	printf("Enter a number to define the rows: ");
	scanf("%d",&row);
	
	for(i=1;i<=row;i++)
	{
		for(space=i;space<=row;space++)		/*print the space *2 */
		{
			printf("  ");
		}
		
		for(j=1;j<=2*i-1;j++)			/*Print  the star*/ 
			printf("%c ",kr);
			printf("\n");
	}
			 

	return 0;
}

