#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[5],i;
clrscr();

 for(i=0;i<5;i++)
  {
   printf("a[%d]=",i);
   scanf("%d",&a[i]);
   printf("b[%d]=",i);
   scanf("%d",&b[i]);
  }

 for(i=0;i<5;i++)
  {
   c[i] = a[i]+b[i];
  }
 for(i=0;i<5;i++)
  {
   printf("%d\n",c[i]);
  }
  getch();
}