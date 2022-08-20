#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter your age");
    scanf("%d",&n);
      if(n>18 || n==18)
	{
	   printf("u are eligibl for vote");
	}
      else
	 {
	    printf("u are not eligible for vote");
	 }
    getch();
}