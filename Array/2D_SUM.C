#include<stdio.h>
#include<conio.h>
void main()
{
int a[5][5],i,j,n,sum=0;
clrscr();
printf("enter value of n=");
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
    {
     scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
	sum=sum+a[i][j];
     }
    printf("\n");
   }
   printf("sum=%d",sum);

getch();
}