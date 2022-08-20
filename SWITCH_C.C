#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
int choice,r,l,w,a,h,ch,value,area;
clrscr();

printf("1 for circle\n");
printf("2 for rectangle\n");
printf("3 for square\n");
printf("4 for cylinder\n");
printf("\nenter choice=");
scanf("%d",&choice);

switch(choice)
 {
   case 1:
   printf("\nenter the r=");
   scanf("%d",&r);
   area=PI*r*r;
   printf("\ncircle=%d",area);
   break;

   case 2:
   printf("enter the l=");
   scanf("%d",&l);
   printf("\nenter the w=");
   scanf("%d",&w);
   area=w*l;
   printf("\nrectangle=%d",area);
   break;

   case 3:
   printf("\nenter the a=");
   scanf("%d",&a);
   area=a*a;
   printf("\nsquare=%d",area);
   break;

   case 4:
   printf("\nenter the r=");
   scanf("%d",&r);
   printf("\nenter the h=");
   scanf("%d",&h);
   area=(2*PI*r*h)+(2*PI*r*r);
   printf("\ncylinder=%d",area);
   break;
 }
getch();
}