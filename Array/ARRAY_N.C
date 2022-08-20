#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],n,i;
clrscr();
scanf("%d",&n);
 for(i=0;i<n;i++)
  {
   printf("a[%d]",i);
   scanf("%d",&a[i]);
  }
 for(i=0;i<n;i++)
  {
   printf("%d\n",a[i]);
  }
getch();
}