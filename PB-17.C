#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l;
 clrscr();
 for(i=1;i<=5;i++)
  {
   for(k=1;k<6-i;k++)
    {
     printf("  ");
    }
   for(j=i;j>=1;j--)
    {
     printf("%d ",j);
    }
   printf("\n");
  }
   for(i=2;i<=5;i++)
   {
    for(k=1;k<i;k++)
     {
     printf("  ");
     }
    for(j=i;j<=5;j++)
    {
     printf("%d ",j);
    }
   printf("\n");
   }
 getch();
}