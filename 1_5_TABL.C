#include<stdio.h>
#include<conio.h>
void main()
{
int no,i,j,mul;
clrscr();
printf("enter no:-");
scanf("%d",&no);
for(i=1;i<=no;i++)
{
  for(j=1;j<=10;j++)
   {
    mul=i*j;
    printf("%d*%d=%d\n",i,j,mul);
   }
   printf("\n");
}
getch();
}