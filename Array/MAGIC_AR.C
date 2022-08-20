#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0,mul=1,a[3];
clrscr();

for(i=0;i<3;i++)
 {
  printf("a[%d]=",i);
  scanf("%d",&a[i]);
 }
for(i=0;i<3;i++)
 {
  mul=mul*a[i];
  sum=sum+a[i];
 }
printf("mul=%d\nsum=%d\n",mul,sum);
if(mul==sum)
{
 printf("magic no");
}
else
{
printf("not magic no");
}
getch();
}