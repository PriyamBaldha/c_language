#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,p;
clrscr();

 printf("");
 for(i=1;i<=5;i++)
  {
    printf("*");
    printf(" ");
  }

  printf("\n");

 for(i=1;i<=3;i++)
  {
   printf(" ");
  }
 for(k=1;k<=4-i;k++)
  {
   if(k==1)
   printf("* ");
  }
 for(j=1;j<=3;j++)
  {
   printf(" ");
  }
 for(p=i;p>=1;p--)
  {
   if(p==1)
   printf("* ");
  }
 printf("\n");


 printf("   ");

 for(k=1;k<=5;k++)
  {
   printf("* ");
  }


getch();
}