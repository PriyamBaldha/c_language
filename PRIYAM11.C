#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
  clrscr();
  int r,Area;
  printf("enter r:-");
  scanf("%d",&r);
  Area=PI*r*r;
  printf("r=%d",Area);

  getch();
}