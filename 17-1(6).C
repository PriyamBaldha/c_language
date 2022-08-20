#include<stdio.h>
#include<conio.h>
void main()
{
 int no,Fact=1;
 clrscr();
 printf("enter no:-");
 scanf("%d",&no);
 while(no!=0)
  {
   Fact=Fact*no;
   no--;
  }
 printf("%d",Fact) ;


 getch();
}