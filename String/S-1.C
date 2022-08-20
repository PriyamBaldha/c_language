#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20];
int freq[200]={0},i;
clrscr();
printf("\n please enter any string: ");
gets(a);
 for(i=0;a[i]!='\0';i++)
  {
   freq[a[i]]++;
  }
 for(i=0;i<200;i++)
   {
    if(freq[i]!=0)
     {
      printf("charcter '%c' occurs %d times \n",i,freq[i]);
     }
   }
getch();
}