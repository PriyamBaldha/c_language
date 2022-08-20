#include<stdio.h>
#include<conio.h>

void main()
{
 char a[10],b[10];
 int i;
 clrscr();
 printf("enter a=");
 scanf("%s",&a);

  for(i=0;a[i]!='\0';i++)
   {
    b[i]=a[i];
   }
   printf("enter b=");
   for(i=0;a[i]!='\0';i++)
   {
    printf("%c",b[i]);
   }
getch();
}
