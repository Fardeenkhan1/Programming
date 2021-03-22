#include<stdio.h>
#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
main()
{
    int num,num1,l=0,i=0;
    printf("enter amount of money\n");
    scanf("%d",&num);
    num1=num;
    while(num1>0)
    {
       if(num1>=100)
       {
           num1=num1-100;
           l++;
       }else if(num1>=50)
       {
           num1=num1-50;
           l++;
       }else if(num1>=10)
       {
           num1=num1-10;
           l++;
       }else if(num1>=5)
       {
           num1=num1-5;
           l++;
       }else if(num1>=2)
       {
           num1=-2;
           l++;
       }else if(num1>=1)
       {
           num1=-1;
           l++;
       }
    }
    printf("total no of notes are %d",l);
}
