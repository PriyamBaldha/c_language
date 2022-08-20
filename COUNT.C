#include<stdio.h>
#include<conio.h>
void main()
{
 int i,no,sum=0;
 clrscr();
 printf("enter no:-");
 scanf("%d",&no);
 while(no!=0)

  {
   no=no/10;
   sum++;
  }
   printf("%d",sum);
 getch();
}