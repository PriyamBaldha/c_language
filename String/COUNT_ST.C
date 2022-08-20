#include<stdio.h>
#include<conio.h>
void main()
{
 char a[12];
 int i,c=0;
 clrscr();
 for(i=0;i<12;i++)
  {
   fflush(stdin);
   scanf("%c",&a[i]);
  }
  for(i=0;i<12;i++)
  {
   printf("%c",a[i]);
   c++;
  }
  printf("\ncount=%d",c);
 getch();
}