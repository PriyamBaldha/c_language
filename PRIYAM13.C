#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
    int celcious,fernhit;
    printf("enter celcious");
    scanf("%d",&celcious);

    celcious=(celcious*9)/5+32;
    printf("celcious=%d",celcious);
  getch();
}