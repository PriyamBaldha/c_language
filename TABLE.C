#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,no,mul;
  clrscr();
  printf("enter no:-");
  scanf("%d",&no);
  while(i<=10)
    {
       mul=no*i;
       printf("%d*%d=%d\n",no,i,mul);
       i++;
    }
  getch();
}