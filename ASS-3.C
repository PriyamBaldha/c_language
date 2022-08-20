#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
   int a,b,c,d;
   clrscr();
   P("enter value of a= \n");
   S("%d",&a);
   P("enter value of b=\n");
   S("%d",&b);
   P("enter value of c=\n");
   S("%d",&c);
   P("enter value of d=\n");
   S("%d",&d);
   P("find out max value\n");
   if(a>b)
   {
     if(a>c)
       {
	 if(a>d)
	   {
	    P("a is big");
	   }
	 else
	   {
	    P("d is big");
	   }
	 }
      else
	{
	  if(c>d)
	   {
	     P("c is big");
	   }
	  else
	  {
	    P("d is big");
	  }
	}
      }
      else
      {
	if(b>c)
	 {
	   if(b>d)
	    {
		  P("b is big");
	    }
	     else
	    {
		P("d is big");
	    }
      }
    else
    {
      if(c>d)
       {
	 P("c is big");
       }
      else
      {
	P("d is big");
      }
     }
   }
 getch();
}