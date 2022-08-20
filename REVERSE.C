#include<stdio.h>
#include<conio.h>
void main()
{
   int no,sum=0,i;
   clrscr();
   printf("enter value");
   scanf("%d",&no);

   while(no!=0)
   {

      i=no%10;
      sum=sum*10+i;
      no=no/10;

   }
   printf("%d",sum);
   getch();
}