
#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
  int num=54321;
  int rem,rev=0,i;
  for(i=num;i>0;i=i/10)
  {
      rem=i%10;
      rev=rev*10+rem;
  }
  printf("\n%d\n",rev);
}
