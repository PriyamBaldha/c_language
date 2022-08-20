#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],i,n,pos,val;
 clrscr();
 printf("enter value on n:-");
 scanf("%d",&n);

 for(i=0;i<n;i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
 printf("\nenter position you want to delet:-");
 scanf("%d",&pos);

 if(pos>=n+1)
  {
   printf("\n deletion not possible");
  }
 else
  {
    for(i=pos-1;i<n-1;i++)
     {
       a[i]=a[i+1];
     }

    for(i=0;i<n-1;i++)
     {
       printf("\na[%d]=%d",i,a[i]);
     }
   }


 getch();
}