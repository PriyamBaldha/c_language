#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    printf("enter the value of a[%d][%d]=",i,j);
    scanf("%d",&a[i][j]);
   }
 }
for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
    if(i<=j)
     {
      printf("%d ",a[i][j]);
     }
    else
     {
      printf("  ");
     }
   }
  printf("\n");
 }
getch();
}



