#include<stdio.h>
#include<conio.h>
void main()
{
int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10},c[5],i,sum;
clrscr();

 for(i=0;i<5;i++)
  {

   c[i]= a[i] +b[i];
  }

 for(i=0;i<5;i++)
  {
   printf("sum=");
   printf("%d\n",c[i]);
  }

getch();
}