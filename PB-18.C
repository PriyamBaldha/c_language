#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l;
 clrscr();
 for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
    {
     printf("%d ",j);
    }
   for(k=1;k<6-i;k++)
    {
     printf("    ");
    }

   for(l=i;l>=1;l--)
    {
     printf("%d ",l);
    }
   printf("\n");
   }
 getch();
}