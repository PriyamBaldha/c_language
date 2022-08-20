#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    clrscr();
    printf("enter a,b and c value");
    scanf("%d %d %d",&a,&b,&c);
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
    getch();
}