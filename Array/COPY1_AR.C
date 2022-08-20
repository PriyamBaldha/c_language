#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],i;
clrscr();

  for(i=0;i<5;i++)
   {
     printf("enter the value of a[%d]=",i);
     scanf("%d",&a[i]);
   }
   for(i=0;i<5;i++)
   {
     b[i]=a[i];
   }
   for(i=0;i<5;i++)
   {
    printf("\na[%d]=%d b[%d]=%d",i,a[i],i,b[i]);
   }
getch();
}