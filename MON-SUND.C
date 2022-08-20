#include<stdio.h>
#include<conio.h>
void main()
{
  char m,t,w,T,f,s,S,choice;
  clrscr();
     printf("press m for monday\n");
     printf("press t for tuesday\n");
     printf("press w for wednesday\n");
     printf("press T for Thruesday\n");
     printf("press f for friday\n");
     printf("press s for saturday\n");
     printf("press S for Sunday\n");
  scanf("%c",&choice);
    if(choice=='m')
       {
	  printf("monday");
       }
       else if(choice=='t')
	 {
	   printf("tuesday");
	 }
	 else if(choice=='w')
	 {
	   printf("wednesday");
	 }
	   else if(choice=='T')
	 {
	   printf("Thruesday");
	 }
	  else if(choice=='f')
	 {
	   printf("friday");
	 }
	   else if(choice=='s')
	 {
	   printf("saturday");
	 }
	   else if(choice=='S')
	 {
	   printf("Sunday");
	 }
      else
	{
	 printf("invalid choice");
	}
  getch();
}

