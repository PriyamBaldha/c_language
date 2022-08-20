#include<stdio.h>
#include<conio.h>

void array_pass(int[],int no);

void main()
{
  int a[10],i,no;
  clrscr();
  printf("enter no:");
  scanf("%d",&no);

  for(i=0;i<no;i++)
    {
      printf("a[%d]=",i);
      scanf("%d",&a[i]);
    }

   array_pass(a,no);
   getch();
}

void array_pass(int b[],int no)
{
 int i,sum=0;

 for(i=0;i<no;i++)
  {
     sum=sum+b[i];
  }
 printf("\nsum=%d",sum);
}

