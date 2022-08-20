#include<stdio.h>
#include<conio.h>

  //function with string:lower case to uper case:

void string_pass(char [],int n);

void main()
 {
  char a[5],i,n;
  clrscr();
  printf("enter value of n:");
  scanf("%d",&n);
  printf("\nenter string:\n");
  for(i=0;i<n;i++)
   {
    fflush(stdin);
    scanf("%c",&a[i]);
   }

   string_pass(a,n);

   getch();
 }
 void string_pass(char b[],int n)
  {
    int i;
    for(i=0;i<n;i++)
     {
       printf("\n%c",b[i]-32);
     }
}