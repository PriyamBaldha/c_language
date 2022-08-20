#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;
 clrscr();
 ch='A';
 do
 {
  printf("%c ",ch);
  ch++;
 }while(ch<='Y');
 printf("\n");

 getch();
}