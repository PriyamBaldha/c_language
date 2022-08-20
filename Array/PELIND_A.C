#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],b[10],i,j,n,c;
clrscr();

printf("enter the value of n:-");
scanf("%d",&n);

for(i=0;i<n;i++)
 {
  printf("enter the value od a[%d]=",i);
  scanf("%d",&a[i]);
 }
for(i=0;i<n;i++)
 {
  b[i]=a[i];
 }
for(i=0,j=n-1;i<n/2;i++,j--)
 {
  c=a[i];
  a[i]=a[j];
  a[j]=c;
 }
for(i=0;i<n;i++)
 {
 printf("\na[%d]=%d",i,a[i]);
 }
 if(b[10]==a[10])
  {
   printf("\npelindrome Array");
  }
 else
  {
   printf("\nnot pelindrome Array");
  }
getch();
}