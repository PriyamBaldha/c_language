#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b;
  clrscr();
  printf("enter a and b value");
  scanf("%d %d",&a,&b);

    if(a<b)
       {
	   printf("a is small\n");
	   printf("a=%d",a);
       }
    else
       {
	   printf("b is small\n");
	   printf("b=%d",b);
       }

 getch();
}