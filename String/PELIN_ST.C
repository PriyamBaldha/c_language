#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[10];
int i,j,l,f=0;
clrscr();
printf("enter string:");
scanf("%s",a);
l=strlen(a);
printf("Reverse w/o function\n");
printf("%d\n",l);

 for(i=(strlen(a)-1),j=0;i>=0;i--,j++)
  {
   b[j]=a[i];
  }
 printf("%s",b);
 for(i=0;i<strlen(a);i++)
  {
   if(a[i]!=b[i])
    {
     f=1;
    }
  }
 if(f==0)
  {
   printf("\n\npelindrome");
  }
 else
  {
   printf("\nnot pelindrome");
  }

getch();
}