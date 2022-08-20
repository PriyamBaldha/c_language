#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],b[5],c[10],i,j;
clrscr();

for(i=0;i<5;i++)
 {
  printf("enter the value of a[%d]=",i);
  scanf("%d",&a[i]);
 }
for(i=0;i<5;i++)
 {
  printf("enter the value of b[%d]=",i);
  scanf("%d",&b[i]);
 }
for(i=0;i<5;i++)
 {
  c[i]=a[i];
 }
for(i=0,j=5;i<5;i++,j++)
 {
  c[j]=b[i];
 }
for(i=0;i<10;i++)
 {
  printf("\nc[%d]=%d",i,c[i]);
 }



getch();
}