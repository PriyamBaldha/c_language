#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,d,e;
 float g;
 printf("enter a,b,c,d value:-");
 scanf("%d %d",&a,&b);
 c=a+b;
 d=a-b;
 e=a*b;
 g=a/b;
 printf("c=%d d=%d e=%d g=%f",c,d,e,g);

 getch();
}