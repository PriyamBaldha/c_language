#include<stdio.h>
#include<conio.h>
void main()
{
int ch,ch1;
clrscr();
printf("press 1 for saving A\C\n");
printf("press 2 for current A\C\n");
scanf("%d",&ch);
  switch(ch)
   {
     case 1:
       printf("press 1 for deposite\n");
       printf("press 2 for withdraw\n");
       scanf("%d",&ch1);
	 switch(ch1)
	 {
	    case 1:
	       printf("u can deposit money\n");
	       break;
	    case 2:
	      printf("u can withdraw money\n");
	      break;
	    default:
	      printf("invalid ch");
	      break;
	}
	break;
	case 2:
	    printf("press 1 for deposite\n");
	    printf("press 2 for withdraw\n");
	    scanf("%d",&ch1);
	switch(ch1)
	{
	     case 1:
	       printf("u can deposit money\n");
	       break;
	    case 2:
	      printf("u can withdraw money\n");
	      break;
	    default:
	      printf("invalid ch");
	}
	 break;
	 default:
	   printf("invalid ch");
	   }
    getch();
 }

