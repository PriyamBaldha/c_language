#include<stdio.h>
#include<conio.h>
void main()
{
 char m,t,w,T,f,s,S,choise;
 clrscr();
  printf("press m for monday\n");
  printf("press t for tuesday\n");
  printf("press w for wednesday\n");
  printf("press T for Thursday\n");
  printf("press f for friday\n");
  printf("press s for saturday\n");
  printf("press S for Sunday\n");
  scanf("%c",&choise);
    switch(choise)
      {
       case 'm':

	 printf("monday");
	 break;

       case 't':
	 printf("tuesday");
	 break;
       case 'w':
	 printf("wednesday");
	 break;
      case 'T':
	 printf("Thursday");
	 break;
      case 'f':
	 printf("friday");
	 break;
       case 's':
	 printf("saturday");
	 break;
       case 'S':
	 printf("Sunday");
	 break;

    default:
	 printf("invalid choise");
      }

 getch();
}
