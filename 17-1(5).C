#include<stdio.h>
#include<conio.h>
void main()
{
int i,no,m,sum=0;
clrscr();
printf("enter no:-");
scanf("%d",&no);
i=no;
 while(no!=0)
  {
   m=no%10;
   sum=sum*10+m;
   no=no/10;
  }
 if(i==sum)
  {
   printf("pelindrome number");
  }
 else
  {
   printf("not pelindrome number");
  }


getch();
}