#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[3],prime[3];
clrscr();

for(i=0;i<3;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
for(i=0;i<3;i++)
 {
   prime[i]=0;
    for(j=1;j<=a[i];j++)
     {
    if(a[i]%j==0)
     {
      prime[i]++;
     }
 }

if(prime[i]==2)
{
 printf("\n%d prime no",a[i]);
}
else
{
printf("\n%d not prime no",a[i]);
}
}
getch();
}