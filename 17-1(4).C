#include<stdio.h>
#include<conio.h>
void main()
{
int no,sum,first_d,last_d,m;
clrscr();
printf("enter no:-");
scanf("%d",&no);
m=no;
no=no%10;
last_d=no;
while(m>10)
{
 m=m/10;
}
first_d=m;
sum=first_d+last_d;
printf("%d",sum);


getch();
}