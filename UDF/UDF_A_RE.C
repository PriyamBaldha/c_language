#include<stdio.h>
#include<conio.h>

  //function with array: reverse

void array_pass(int [],int n);

void main()
 {
  int a[5],i,n;
  clrscr();
  printf("enter value of n:");
  scanf("%d",&n);
  printf("\nenter array:\n");
  for(i=0;i<n;i++)
   {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
   }
   array_pass(a,n);
   getch();
 }
 void array_pass(int b[],int n)
  {
   int i;
   for(i=n-1;i>=0;i--)
     {
      printf("\n%d",b[i]);
     }
}