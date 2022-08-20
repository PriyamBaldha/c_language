#include<stdio.h>
#include<conio.h>

void add();
void sub();
void mul();
void div();
void main()
 {
   int choice;
   clrscr();
   printf("press 1 for addition:\n");
   printf("press 2 for subtraction:\n");
   printf("press 3 for multiplin:\n");
   printf("press 4 for division:\n");
   scanf("%d",&choice);

    switch(choice)
    {
     case 1:
     add();
     break;
     case 2:
     sub();
     break;
     case 3:
     mul();
     break;
     case 4:
     div();
     break;
     default:
     printf("invalid choice");
   }

 getch();
 }
 void add()
  {
   int a,b,c;
   printf("enter a and b value=");
   scanf("%d%d",&a,&b);
   c=a+b;
   printf("%d",c);
  }
 void sub()
  {
   int a,b,c;
   printf("enter a and b value=");
   scanf("%d%d",&a,&b);
   c=a-b;
   printf("%d",c);
  }
 void mul()
  {
   int a,b,c;
   printf("enter a and b value=");
   scanf("%d%d",&a,&b);
   c=a*b;
   printf("%d",c);
  }
  void div()
  {
   int a,b,c;
   printf("enter a and b value=");
   scanf("%d%d",&a,&b);
   c=a/b;
   printf("%d",c);
  }