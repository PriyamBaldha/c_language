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
   for(j=6-i;j<=5;j++)
    {
    printf("%d  ",j);
    }
   for(l=4;l>=6-i;l-)
   {
    printf("%d  ",l);
   }
  printf("\n");
 }
 getch();
}