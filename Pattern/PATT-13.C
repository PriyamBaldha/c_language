#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k;
clrscr();

for(i=10;i<=50;i+=10)
{
  for(j=10;j<=i;j+=10)
  {
  printf("%d ",j);
  }
  printf("\n");
}
getch();
}