#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();

 for(i=1;i<=11;i++)
  {
   printf("* ");
  }
 printf("\n");

 for(i=1;i<=10;i++)
  {
   for(j=1;j<=10;j++)
    {
      printf(" ");
    }
  for(k=1;k<=1;k++)
   {
   printf("*");
   }
  printf("\n");
 }
getch();
}