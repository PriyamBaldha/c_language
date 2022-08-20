#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  printf("enter a,b,c value");
  scanf("%d %d %d",&a,&b,&c);

   (a>b)?(a>c)?printf("a is big"):printf("c is big")
   :(b>c)?printf("b is big"):printf("c is big");




  getch();
}