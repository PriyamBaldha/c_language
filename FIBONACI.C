#include<stdio.h>
#include<conio.h>
void main()
{
  int s,s1,s2,i=1,no;
  clrscr();
  s=0;
  s1=1;
  scanf("%d",&no );
    printf("%d %d ",s,s1);
  while(i<no)
  {
     s2=s+s1;
     printf("%d ",s2);
     s=s1;
     s1=s2;
     i++;
  }


  getch();
}