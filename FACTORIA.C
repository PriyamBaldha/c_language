#include<stdio.h>
#include<conio.h>
void main()
{
   int no,fact=1;
   clrscr();
   printf(" enter no");
   scanf("%d",&no);

   while(no!=0)
   {
     fact=fact*no;
     no--;
   }
   printf("%d",fact);

   getch();
}