#include<stdio.h>
#include<conio.h>

int fact(int);

void main()
{
 int no,ans;
 clrscr();
 printf("enter no:");
 scanf("%d",&no);
 ans=fact(no);
 printf("\nfact=%d",ans);
 getch();
}

int fact(int no)
{
 if(no==0)
  {
   return 1;
  }
 else
  {
   return no*fact(no-1);
  }
}