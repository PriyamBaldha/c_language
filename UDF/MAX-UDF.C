#include<stdio.h>
#include<conio.h>

void max();

void main()
{
 clrscr();
 max();
 getch();
}

void max()
{
 int a,b,c;
 printf("enter value of a=");
 scanf("%d",&a);
 printf("\nenter value of b=");
 scanf("%d",&b);
 printf("\nenter value of c=");
 scanf("%d",&c);

 if(a>b)
  {
   if(a>c)
    {
     printf("a is big");
    }
   else
    {
     printf("c is big");
    }
   }
  else
   {
    if(b>c)
     {
      printf("b is big");
     }
    else
     {
      printf("c is big");
     }
    }
}


