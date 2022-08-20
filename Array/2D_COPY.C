#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],i,j;
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
     b[i][j]=a[i][j];
   }
  }
 for(i=0;i<3;i++)
 {
  for(j=0;j<3;j++)
   {
   printf("\na[%d][%d]=%d b[%d][%d]=%d",i,j,a[i][j],i,j,b[i][j]);
   }
 }
getch();
}