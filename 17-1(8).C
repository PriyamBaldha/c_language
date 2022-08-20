#include<stdio.h>
#include<conio.h>
void main()
{
int i,no,c=0;
clrscr();
printf("enter no:-");
scanf("%d",&no);
for(i=1;i<=no;i++)
 {
  if(no%i==0)
    {
     c++;
    }
  }
 if(c==2)
 {
  printf("prime number");
 }
 else
 {
  printf("not prime number");
 }



getch();
}