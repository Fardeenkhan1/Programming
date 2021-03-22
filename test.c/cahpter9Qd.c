#include<stdio.h>
#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
int swap(int *,int *,int *);
main()
{
    int x=5,y=8,z=10;
    swap(&x,&y,&z);
    printf("x=%d\ny=%d\nz=%d\n",x,y,z);
}
int swap(int *a,int *b,int *c)
{
    int d;
    d=*a;
    *a=*c;
    *c=*b;
    *b=d;
}
