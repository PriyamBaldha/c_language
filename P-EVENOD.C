#include<stdio.h>
#include<conio.h>
void main()
{
    int i;
    clrscr();
    printf("enter the value");
    scanf("%d",&i);
	if(i%2==0)
	   {
	     printf("your value is even");
	   }
	else
	   {
	     printf("your value is odd");
	   }

    getch();
}