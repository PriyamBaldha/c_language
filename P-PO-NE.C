#include<stdio.h>
#include<conio.h>
void main()
{
   int n;
   clrscr();
   printf("enter a and b value");
   scanf("%d",&n);
      if(n>0)
	 {
	    printf("n is positive\n");
	    printf("%d",n);
	 }
     else
	 {
	   printf("n is nagitive\n");
	   printf("%d",n);
	 }



   getch();
}