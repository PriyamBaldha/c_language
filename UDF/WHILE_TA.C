#include<stdio.h>
#include<conio.h>

 //while_table
void main()
{
 int no,mul,i=1,j;
 clrscr();
 printf("enter no:");
 scanf("%d",&no);

 while(i<=no)
  {
    j=1;
    while(j<=10)
      {
       mul=i*j;
       printf("%d*%d=%d\t",i,j,mul);
      j++;
      }
      printf("\n");
      i++;
  }
 getch();
}