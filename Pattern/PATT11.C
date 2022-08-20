#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j;
 clrscr();
 for(i=21;i<=25;i++)
 {
  for(j=21;j<=i;j++)

    {
      printf("%d ",j);
    }
   printf("\n");
 }
 getch();
}