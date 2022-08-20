#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],n,c[10][10],i,j;
clrscr();
scanf("%d",&n);
for(i=0;i<n;i++)
 {
  for(j=0;j<n;j++)
    {
	printf("a[%d][%d]",i,j);
	scanf("%d",&a[i][j]);
    }
  }
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
	printf("b[%d][%d]",i,j);
	scanf("%d",&b[i][j]);
     }
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
	c[i][j]=a[i][j]+b[i][j];
     }
   }
   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
	printf("%d ",c[i][j]);
     }
     printf("\n");
   }

getch();
}