#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
   int a,b;
   clrscr();
   P("enter value of a=");
   S("%d",&a);
   P("enter value of b=");
   S("%d",&b);
   if(a>b)
   {
     P("\na is bigger\nb is smaller than a");
   }
   else if(b>a)
   {
     P("\nb is bigger\n a is smaller than b");
   }
   else
   {
    P("\n both are same");
   }


   getch();
}