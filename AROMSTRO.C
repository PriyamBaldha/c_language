#include<stdio.h>
#include<conio.h>
void main()
{
  int no,m,Arm=0,i;
  clrscr();
  printf("enter no:-");
  scanf("%d",&no);
  m=no;
  while(no!=0)
  {
    i=no%10;
    Arm=Arm+i*i*i;
    no=no/10;
  }
  if(m==Arm)
  {
   printf("it's Armstrom number");
  }
  else
  {
     printf("it's not Armstrom number");
  }

  getch();
}