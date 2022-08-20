#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char a[10];
clrscr();
scanf("%s",&a);
 for(i=0;i<5;i++)
  {
    if(a[i]>='a' && a[i]<='z')
     {
      printf("%c",a[i]-32);
     }
    else if(a[i]>='A' && a[i]<='Z')
     {
      printf("%c",a[i]+32);
     }
    else
     {
      printf("invalid task");
     }
 }
getch();
}