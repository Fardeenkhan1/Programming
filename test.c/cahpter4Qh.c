#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
    int k,num=30;
    k=(num>5?(num<=10?100:200):500);
    printf("%d",k);
}
