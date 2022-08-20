#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],i,j,row,col;
clrscr();
   printf("enter thr number of row=");
   scanf("%d",&row);

   printf("enter thr number of col=");
   scanf("%d",&col);

   printf("\n enter elements of the matrix=\n");
  for(i=0;i<row;i++)
   {
    for(j=0;j<col;j++)
     {
      scanf("%d",&a[i][j]);
     }
   }
   printf("\n the elements of the matrix=\n");

    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
       {
	printf("%d",a[i][j]);
       }
       printf("\n");
    }


      for(i=0;i<row;i++)
       {
	 for(j=0;j<col;j++)
	  {
	   b[j][i]=a[i][j];
	  }
       }

   printf("\n after transpose the elements are=\n");

    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
       {
	printf("%d",b[i][j]);
       }
       printf("\n");

    }
getch();
}