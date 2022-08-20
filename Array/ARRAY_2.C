#include<stdio.h>
#include<conio.h>
#include<limits.h>
#define MAX_SIZE 1000
void main()
{
int arr[MAX_SIZE],size,i;
int max1,max2;
clrscr();
 printf("enter size of the array(1 to 1000):-");
 scanf("%d",&size);

 printf("\n enter elements in the array:-");
 for(i=0;i<size;i++)
  {
   scanf("%d",&arr[i]);
  }
 max1=max2=INT_MIN;

 for(i=0;i<size;i++)
  {
   if(arr[i]>max1)
    {
     max2=max1;
     max1=arr[i];
    }
   else if(arr[i]>max2 && arr[i]<max1)
    {
     max2=arr[i];
    }
  }
  printf("\nfirst largest=%d\n",max1);
  printf("\nsecond largest=%d\n",max2);
getch();
}