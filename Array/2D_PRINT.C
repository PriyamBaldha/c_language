#include<stdio.h>
#include<conio.h>
void main()
{
int a[2][2]={{1,2},{3,4}},i,j;
clrscr();
for(i=0;i<2;i++)
 {
  for(j=0;j<2;j++)
    {
     printf("%d ",a[i][j]);
    }
  printf("\n");
  }

getch();
}