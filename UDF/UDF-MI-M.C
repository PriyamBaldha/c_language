#include<stdio.h>
#include<conio.h>

void priyam(int,int,int);
void main()
{
 int a,b,c;
 clrscr();
 printf("enter a= ");
 scanf("%d",&a);
 printf("enter b= ");
 scanf("%d",&b);
 printf("enter c= ");
 scanf("%d",&c);
 priyam(a,b,c);
 getch();
}
void priyam(int x,int y,int z)
 {
  (x>y)?(x>z)?printf("a is big"):printf("b is big"):
	(y>z)?printf("b is big"):printf("c is big");
 }