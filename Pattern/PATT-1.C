#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,p=1;
clrscr();
 for(i=0;i<=5;i++)
  {
   for(j=5;j>i;j--)
    {
     printf(" ");
    }
  printf("*");

  if(i>0)
  {
   for(k=1;k<=p;k++)
    {
     printf(" ");
    }
  p +=2;
  printf("*");
  }
  printf("\n");
 }
  p -=4;
  for(i=0;i<=5-1;i++)
   {
    for(j=0;j<=i;j++)
     {
      printf(" ");
     }
    printf("*");
     for(k=1;k<=p;k++)
      {
       printf(" ");
      }
    p -=2;
     if(i !=5-1)
      {
       printf("*");
      }
     printf("\n");
    }

getch();
}