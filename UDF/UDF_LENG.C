#include<stdio.h>
#include<conio.h>
#include<string.h>

//length:

void string_pass(char[],int n);

void main()
 {
  char a[100],n,i;
  clrscr();
  gets(a);

  string_pass(a,n);

  getch();
 }
void string_pass(char b[],int n)
 {
   int i;
   n=strlen(b);

     printf("%d",n);

 }

