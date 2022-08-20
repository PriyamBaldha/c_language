#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,ch;
   clrscr();
   printf("enter a and b value");
   scanf("%d %d",&a,&b);
      printf("press 1 for addition\n");
      printf("press 2 for subtraction\n");
      printf("press 3 for multiplication\n");
      printf("press 4 for division\n");
      scanf("%d",&ch);
	 switch(ch)
	   {
	     case 1:
	       printf("adition%d",a+b);
	       break;
	      case 2:
	       printf("subtraction%d",a-b);
	       break;
	      case 3:
	       printf("multiplication",a*b);
	       break;
	      case 4:
	       printf("division",a/b);
	       break;
	 default:
	     printf("invalid choice");
	   }
   getch();
}