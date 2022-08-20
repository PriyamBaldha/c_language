#include<stdio.h>
#include<conio.h>
void main()
{
  float m,s,e,g,total,avg;
  clrscr();
  printf("enter m,s,e,g marks");
  scanf("%f %f %f %f",&m,&s,&e,&g);
    total=m+s+e+g;
    avg=total/4;

    if(avg>=80)
    {
      printf("grade=A");
    }
     else if(avg>=60 && avg<80)
       {
	 printf("grade=b");
       }
     else if(avg>=40 && avg<60)
     {
       printf("grade=c");
     }
     else if(avg>=30 && avg<40)
      {
	printf("grade=d");
      }
    else
    {
      printf("fail");
    }
 getch();
 }