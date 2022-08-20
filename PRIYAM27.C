#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c;
     clrscr();
     printf("enter a and b and c value");
     scanf("%d %d %d",&a,&b,&c);

     a=a+2;
     b+=2;
     c++;
     printf("\n%d \n%d \n%d",a,b,c);

    getch();
}