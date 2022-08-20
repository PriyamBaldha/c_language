#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,j,n,length=0;
char a[5][5];
clrscr();

 printf("enter n value:-");
 scanf("%d",&n);

 for(i=0;i<=n;i++)
  {
   gets(a[i]);
   length=length+strlen(a[i]);
  }
 for(i=0;i<=n;i++)
  {
   puts(a[i]);
  }

 printf("length=%d",length);

getch();
}
