#include<stdio.h>
#include<conio.h>
void main()
{
 int a,b,ch;
 clrscr();
 printf("enter a,b value");
 scanf("%d%d",&a,&b);
 printf("\nenter 1 for addition");
 printf("\nenter 2 for subtraction");
 printf("\nenter 3 for multiplication");
 printf("\nenter 4 for division\nEnter your choice = ");
 scanf("%d",&ch);
 if(ch==1)
 {
    printf("addtion=%d",a+b);
 }
    else if(ch==2)
    {
      printf("subtraction=%d",a-b);
    }
      else if(ch==3)
    {
      printf("multiplication=%d",a*b);
    }
      else if(ch==4)
    {
      printf("division=%d",a/b);
    }
  else
  {
     printf("invalid choice");
  }
 getch();
}