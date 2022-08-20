#include<stdio.h>
#include<conio.h>

  //function with array:delete

void array_pass(int [],int n,int pos);

void main()
 {
  int a[5],i,n,pos;
  clrscr();
  printf("enter value of n:");
  scanf("%d",&n);
  printf("\nenter array:\n");
  for(i=0;i<n;i++)
   {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
   }
   printf("\nenter position u want to delete=");
   scanf("%d",&pos);

   array_pass(a,n,pos);
   getch();
 }
 void array_pass(int b[],int n,int pos)
  {
   int i;
   for(i=pos;i<n;i++)
     {
      b[i]=b[i+1];
     }
   n--;
   for(i=0;i<n;i++)
     {
      printf("a[%d]=%d\n",i,b[i]);
     }

  }