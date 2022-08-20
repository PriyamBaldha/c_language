#include<stdio.h>
#include<conio.h>

void main()
{
    int choice;
    clrscr();
    printf("press 1 for january\n");
     printf("press 2 for february\n");
      printf("press 3 for march\n");
     printf("press 4 for april\n");
      printf("press 5 for may\n");
     printf("press 6 for june\n");
      printf("press 7 for july\n");
      printf("press 8 for august\n");
       printf("press 9 for september\n");
	printf("press 10 for octomber\n");
	printf("press 11 for november\n");
	 printf("press 12 for december\n");
 scanf("%d",&choice);
 switch(choice)
  {
      case 1:
	 printf("january");
	 break;
      case 2:
	 printf("february");
	 break;
       case 3:
	 printf("march");
	 break;
       case 4:
	 printf("april");
	 break;
       case 5:
	 printf("may");
	 break;
       case 6:
	 printf("june");
	 break;

       case 7:
	 printf("july");
	 break;
	 case 8:
	 printf("august");
	 break;
	 case 9:
	 printf("september");
	 break;
	 case 10:
	 printf("octomber");
	 break;
	  case 11:
	 printf("november");
	 break;
	  case 12:
	 printf("december");
	 break;
      default:
	printf("invalid choice");





  }




    getch();
}