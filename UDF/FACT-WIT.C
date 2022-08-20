#include<stdio.h>
#include<conio.h>

void fact(int);
void main()
{
 int f;
 clrscr();
 printf("enter no:");
 scanf("%d",&f);
 fact(f);
 getch();
}
void fact(int x)
 {
  int Fact=1;

 while(x!=0)
  {
   Fact=Fact*x;
   x--;
  }
 printf("fact=%d",Fact);
}