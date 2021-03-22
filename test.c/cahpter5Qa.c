#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
    int i,sal=0,ot,time;
    printf("enter amount of time the employees have worked\n");
    scanf("%d",&time);
    if(time>40)
    {
    for(i=0;i<10;i++)
    {
         ot=time-40;
         sal=sal+ot*12.00;
    }
    }
    printf("amount of money paid to each worker is %d\n",sal/10);
    printf("total amount of money paid to the employees is %d\n",sal);
}
