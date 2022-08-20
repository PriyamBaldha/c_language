#include<stdio.h>
#include<conio.h>
void main()
{
int a[10][10],b[10][10],c[10][10],i,j,n;
clrscr();
printf("enter n=");
scanf("%d",&n);

  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      printf("elements of the a[%d][%d]= ",i,j);
      scanf("%d",&a[i][j]);
     }
   }

   for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     {
      printf("elements of the b[%d][%d]=",i,j);
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
      printf("c[%d]=%d ",i,c[i][j]);
     }
    printf("\n");
   }




getch();
}