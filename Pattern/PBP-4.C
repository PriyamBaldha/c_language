#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,k,l;
 clrscr();
 for(i=1;i<=5;i++)
  {
   for(k=1;k<6-i;k++)
     {
      printf("   ");
     }
   for(j=5;j>=6-i;j--)
    {
    printf("%d  ",j);
    }
   for(l=7-i;l<=5;l++)
   {
    printf("%d  ",l);
   }
  printf("\n");
 }
 getch();
}