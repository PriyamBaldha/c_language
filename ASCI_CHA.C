#include<stdio.h>
#include<conio.h>
void main()
{
   int no;
   clrscr();
   printf("enter your value");
   scanf("%d",&no);
     if(no>='a' && no<='z' || no>='A' && no<='Z')
       {

	  printf("%c",no);
       }
     else if(no>='0' && no<='9')
   {
	   printf("%c",no);

       }
    else
    {
      printf("%c",no);
    }
   getch();
}