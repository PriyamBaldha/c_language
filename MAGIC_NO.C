#include<stdio.h>
#include<conio.h>
void main()
{
  int n,i,mul=1,sum=0;
  clrscr();
  printf("\enter n value");
  scanf("%d",&n);
    while(n!=0)
     {
	 i=n%10;
	 sum=sum+i;
	 mul=mul*i;
	 n=n/10;
    printf("\nmultiplaction=%d",mul);
    printf("\naddtion=%d",sum);
    }
    if(mul==sum)
    {
     printf("\nmagic number");
    }
    else
    {
     printf("\nnot magic number");
    }

getch();
}