#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();
   printf("enter value");
   scanf("%d",&n);
	if(n==0)
	  {
	      printf("your value is nutral");
	  }
	else if(n>0)
	{
	  printf("your value is positive");
	}
	else
	{
	  printf("your value is negative");
	}

   getch();
}