#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
#define RAD 0.0174
#include<math.h>
main()
{
    float b=1,i,j,x,*y,fact,sum=0;
    printf("enter the angle in degrees\n");
    scanf("%f",&x);
    x=RAD*x;
    y=&x;
    for(i=1;i<=3;i++)
    {
        fact=1;
        for(j=b;j>=1;j--)
        {
            fact=fact*j;
        }
        sum=(-1)*sum + pow(*y,b)/fact;
        b+=2;
    }
    printf("%f\n",sum);
}
