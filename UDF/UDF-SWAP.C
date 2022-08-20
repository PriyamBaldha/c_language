#include<stdio.h>
#include<conio.h>
void swap();
void main()
{
 swap();
 getch();
}
void swap()
{
 int a,b,c;
 clrscr();
 printf("enter a value=");
 scanf("%d",&a);
 printf("enter b value=");
 scanf("%d",&b);

  c=a;
  a=b;
  b=c;

 printf("After swapping:");
 printf("\na=%d b=%d",a,b);
}