#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("enter a and b value");
  scanf("%d %d",&a,&b);

  (a>b)?printf("a is big"):printf("b is big");
  getch();
}