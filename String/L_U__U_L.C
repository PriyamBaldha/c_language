#include<stdio.h>
#include<conio.h>
void main()
{
char a[6];
int i;
clrscr();
printf("lower to upper case:\n");
 for(i=0;i<6;i++)
  {
   fflush(stdin);
   scanf("%c",&a[i]);
  }
 for(i=0;i<6;i++)
  {
   printf("%c",a[i]-32);
  }

printf("\nupper to lower case:\n");
 for(i=0;i<6;i++)
  {
   fflush(stdin);
   scanf("%c",&a[i]);
  }
 for(i=0;i<6;i++)
  {
   printf("%c",a[i]+32);
  }

getch();
}