#include<stdio.h>
#include<conio.h>
#include<string.h>

void string_pass(char[],int no);

void main()
{
  char a[100],i,no;
  clrscr();
  printf("enter charcter:\n");
  gets(a);

   string_pass(a,no);

   getch();
}

void string_pass(char b[],int no)
{
 int i;
 no=strlen(b);

   printf("\nlength=%d",no);

}