#include<stdio.h>
#include<conio.h>
void main()
{
 char a[12];
 int i;
 clrscr();
 for(i=0;i<12;i++)
  {
   scanf("%c",&a[i]);
  }
  for(i=11;i>=0;i--)
  {
   printf("%c",a[i]);
  }

 getch();
}