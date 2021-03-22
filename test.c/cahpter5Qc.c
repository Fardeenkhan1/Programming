#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
 int a,b,i,t=1;
 printf("enter two numbers\n");
 scanf("%d %d",&a,&b);
 for(i=0;i<b;i++)
 {
     t=t*a;
 }
 printf("\n%d",t);
}
