#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],freq[10],n,i,j,count;
clrscr();
printf("size of an array=");
scanf("%d",&n);

for(i=0;i<n;i++)
 {
   printf("enter the value of a[%d]=",i);
   scanf("%d",&a[i]);
   freq[i]=-1;

 }
for(i=0;i<n;i++)
 {
  count=1;
   for(j=i+1;j<n;j++)
    {
     if(a[i]==a[j])
      {
       count++;

       freq[j]=0;
      }
     }
    if(freq[i]!=0)
     {
      freq[i]=count;
     }
  }
 for(i=0;i<n;i++)
  {
   if(freq[i]!=0)
    {
     printf("\n%d occurs %d times",a[i],freq[i]);
    }
   }





getch();
}