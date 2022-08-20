#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,j,n,pos,val,c;
clrscr();
printf("enter total number of array = ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
 printf("a[%d] = ",i);
 scanf("%d",&a[i]);
}
printf("\n1) insert\n2) update\n3) delete\nenter your choice = ");
scanf("%d",&c);
switch(c)
{

 case 1:
 printf("enter the position to insert = ");
 scanf("%d",&pos);
 printf("enter the value = ");
 scanf("%d",&val);
 for(i=n-1;i>=pos;i--)
 {
   a[i+1]=a[i];
 }
 a[pos]=val;
 n++;
 for(i=0;i<n;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
   break;

  case 2:
 printf("enter the position to update = ");
 scanf("%d",&pos);
 printf("enter the value = ");
 scanf("%d",&val);
 a[pos]=val;
 for(i=0;i<n;i++)
 {
  printf("a[%d] = %d\n",i,a[i]);
 }

  break;

  case 3:
 printf("enter the position to delete = ");
 scanf("%d",&pos);
 for(i=pos;i<=n-1;i++)
 {
  a[i]=a[i+1];
 }
 n--;
 for(i=0;i<n;i++)
 {
  printf("a[%d]=%d\n",i,a[i]);
 }
 break;

 default:
 printf("enter the valid choice  !!");
 break;
 }
 getch();
}

