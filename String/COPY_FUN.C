#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 char a[6],b[6];
 clrscr();
 puts("string a=");
 gets(a);
 strcpy(b,a);
 puts("string b=");
 puts(b);


 getch();
}