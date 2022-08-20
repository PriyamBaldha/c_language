#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,c,d;
   clrscr();
   printf("enter a,b,c,d value");
   scanf("%d%d%d%d",&a,&b,&c,&d);
       if(a>b && a>c && a>d)
	 {
	    printf("a is max");
	 }
	 else if(b>c && b>d)
	  {
	     printf("b is max");
	  }
	 else if(c>d)
	  {
	   printf("c is max");
	  }
       else
       {
	printf("d is big");
       }
   getch();
}