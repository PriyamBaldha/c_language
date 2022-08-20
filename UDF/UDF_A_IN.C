#include<stdio.h>
#include<conio.h>

  //function with array:insert

void array_pass(int [],int n,int pos,int val);

void main()
 {
  int a[5],i,val,n,pos;
  clrscr();
  printf("enter value of n:");
  scanf("%d",&n);
  printf("\nenter array:\n");
  for(i=0;i<n;i++)
   {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
   }
   printf("\nenter position u want to insert=");
   scanf("%d",&pos);
   printf("\nenter new value=");
   scanf("%d",&val);

   array_pass(a,n,pos,val);
   getch();
 }
 void array_pass(int b[],int n,int pos,int val)
  {
   int i;
   for(i=n-1;i>=pos;i--)
     {
      b[i+1]=b[i];
     }
   b[pos]=val;
   n++;
   for(i=0;i<n;i++)
     {
      printf("a[%d]=%d\n",i,b[i]);
     }

  }