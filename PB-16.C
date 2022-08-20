#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,l;
 clrscr();
 for(i=1;i<=5;i++)
  {
   for(j=i;j>=1;j--)
    {
     printf("%d ",j);
    }
   printf("\n");
  }
   for(i=1;i<=4;i++)
  {
   for(j=5-i;j>=1;j--)
    {
     printf("%d ",j);
    }
   printf("\n");
   }
 getch();
}