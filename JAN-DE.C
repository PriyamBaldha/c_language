#include<stdio.h>
#include<conio.h>
void main()
{
   char j,f,m,a,M,ju,J,A,s,o,n,d,choise;
   clrscr();
      printf("press j for january\n");
      printf("press f for febuary\n");
      printf("press m for march\n");
      printf("press a for april\n");
      printf("press M for May\n");
      printf("press ju for june\n");
      printf("press J for July\n");
      printf("press A for August\n");
      printf("press s for september\n");
      printf("press o for octomber\n");
      printf("press n for november\n");
      printf("press d for december\n");
   scanf("%c",&choise);
    if(choise=='j')
       {
	 printf("january");
       }
    else if(choise=='f')
	{
	 printf("febuary");
	}
      else if(choise=='m')
	{
	 printf("march");
	}
       else if(choise=='a')
	{
	 printf("april");
	}
	else if(choise=='M')
	{
	 printf("May");
	}
	  else if(choise=='ju')
	{
	 printf("june");
	}
	  else if(choise=='J')
	{
	 printf("July");
	}
	  else if(choise=='A')
	{
	 printf("August");
	}
	  else if(choise=='s')
	{
	 printf("september");
	}
	  else if(choise=='o')
	{
	 printf("octomber");
	}
	  else if(choise=='n')
	{
	 printf("november");
	}
	 else if(choise=='d')
	{
	 printf("december");
	}
    else
    {
    printf("invalid choice");
    }
   getch();
}