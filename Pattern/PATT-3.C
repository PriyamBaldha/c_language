#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();

 for(i=1;i<=5;i++)
  {
   for(j=1;j<=5;j++)
    {
      printf("%d ",j+i-1);
    }
   printf("\n");
  }
getch();
}