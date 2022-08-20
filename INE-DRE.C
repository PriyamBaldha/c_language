#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();
   printf("enter a and b value");
   scanf("%d %d",&a,&b);

   a=a+1;
   b=b-1;

   printf("\na=%d b=%d",a,b);
   c=a-b;
   printf("\nc=%d",c);
   getch();
}




