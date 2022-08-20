#include<stdio.h>
#include<conio.h>
void main()
{
   int i=5;
   clrscr();
   do
   {
     printf("%d\t",i);
     i=i+5;
   }
   while(i<=100);
   getch();
}