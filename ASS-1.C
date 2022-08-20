#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
 char a;
 clrscr();
 P("enter value:");
 S("%c",&a);
 if(a>='A' && a<='Z'|| a>='a' && a<='z')
  {
    P("alphabet");
  }
 else if(a>='0' && a<='9')
 {
  P("number");
 }
 else
 {
  P("special charcter");
 }





 getch();
}