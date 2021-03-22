#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void clrscr()
{
    system("@cls||clear");
}
void ar(int,int,int,float,float*);
main()
{
    int a,b,c;
    float S,area;
    printf("enter sides of triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    S=(a+b+c)/2.0;
    ar(a,b,c,S,&area);
    printf("area=%f\n",area);
}
ar(int a,int b,int c,float S,float *q)
{
    *q=sqrt(S*(S-a)*(S-b)*(S-c));
}
