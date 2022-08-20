#include<stdio.h>
#include<conio.h>
#define max_size 100
void main()
{
int a[max_size],i,n;
clrscr();

  printf("enter the size of array=");
  scanf("%d",&n);

  printf("enter the elements array=\n");

  for(i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }

  printf("\nall negative elements in arry are= ");

  for(i=0;i<n;i++)
   {
    if(a[i]<0)
     {
      printf("%d ",a[i]);
     }
   }
getch();
}

