#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],i,j,n,sum=0;
clrscr();
printf("enter the size of array=");
scanf("%d",&n);

for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("enter the value of a[%d][%d]=",i,j);
   scanf("%d",&a[i][j]);
  }
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   printf("%d ",a[i][j]);
  }
  printf("\n");
 }
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
  {
   if(i==j)
    {
     sum=sum+a[i][j];
    }
   }
  }
  printf("sum of diagonal is %d",sum);
getch();
}