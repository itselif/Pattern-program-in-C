#include<stdio.h>
int main()
{
    /* Full Pyramid of Numbers */

    int i,j,num=1,row,space;

    printf("Enter a number to define the rows: ");
	scanf("%d",&row);

    for(i=1;i<=row;i++)
    {
        for(space=i;space<=row;space++)
        {
            printf("  ");
        }
            for(j=1;j<=2*i-1;j++)
              {
                  printf("%d ",num);

              }
         num++;
        printf("\n");
   }




return 0;
}
