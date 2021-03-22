#include<stdlib.h>
#include<stdio.h>
void clrscr()
{
    system("@cls||clear");
}
main()
{
    int j=1980,k=1617,b,f;
    while(j!=0)
    {
        b=j/k;
        f=j-(b*k);
        j=k;
        k=f;

    }
    printf("%d",j);
}
