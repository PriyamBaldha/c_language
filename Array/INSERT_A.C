#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,pos,val;
 clrscr();
 printf("enter value on n:-");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
    printf("enter the value of a[%d]=",i);
    scanf("%d",&a[i]);
  }
 printf("\nenter pos:-");
 scanf("%d",&pos);
 printf("\nenter new value:-");
 scanf("%d",&val);

 for(i=n-1;i>=pos;i--)
 {
  a[i+1]=a[i];
 }

 a[pos]=val;
 n++;

 for(i=0;i<n;i++)
 {
   printf("\na[%d]=%d",i,a[i]);
 }



 getch();
}