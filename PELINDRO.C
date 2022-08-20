#include<stdio.h>
#include<conio.h>
void main()
{
  int no,i,sum=0,m;
  clrscr();
  printf("enter no:-");
  scanf("%d",&no);
  i=no;
  while(no>0)
  {
    m=no%10;
    sum=sum*10+m;
    no=no/10;
  }
  if(i==sum)
   {
    printf(" palindrome number");
   }
  else
   {
    printf(" not palindrom number");
   }



  getch();
}