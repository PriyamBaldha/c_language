#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
 int f;
 clrscr();
 f=fact();
 printf("%d",f);
 getch();
}
int fact(int)
 {
  int no,Fact=1;
  printf("enter no:");
  scanf("%d",&no);

 while(no!=0)
  {
   Fact=Fact*no;
   no--;
  }
 return Fact;
}