#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
   int s,fs;
   clrscr();
   P("enter salary amount of amployee");
   S("%d",&s);
   if(s>=1000 && s<=5000)
   {
    fs=s+1000;
   }
   else if(s>5000 && s<=10000)
   {
    fs=s+2000;
   }
   else if(s>10000 && s<=20000)
   {
    fs=s+3000;
   }
    else if(s>20000 && s<=50000)
   {
    fs=s+4000;
   }
   else
   {
   P("\n your salary expectations are hire than we can afford.please to meet you.");
   }
   P
   {
   ("\ncongrats you have got increment of %d Rs\n your total salary is=%dRs",fs-s+fs);
   }



   getch();
}