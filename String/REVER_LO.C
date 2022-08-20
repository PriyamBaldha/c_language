#include<stdio.h>
#include<conio.h>
void main()
{
char a[6];
int i,n;
clrscr();
 printf("enter length=");
 scanf("%d",&n);
 printf("enter ch=");
 scanf("%s",a);

 for(i=n-1;i>=0;i--)
  {

     printf("%c",a[i]);
  }




getch();
}