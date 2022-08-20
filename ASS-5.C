#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
void main()
{
  int u,a,s,t;
  clrscr();
  P("enetr total unit =");
  S("%d",&u);
  if(u>0 && u<=150)
  {
    a=u*0.50;
  }
  else if(u>50 && u<=150)
  {
   a=u*0.75;
  }
  else if(u>150 && u<=250)
  {
   a=u*1.20;
  }
  else
  {
   a=u*1.50;
  }
  s=a*0.20;
  t=s+a;
  P("unit=%d\ncharge according to unit=%d\nextra subcharge=%d\ntotal payble amount=%d",u,a,s,t);

  getch();
}