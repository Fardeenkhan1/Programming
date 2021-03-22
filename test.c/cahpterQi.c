#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
    int b,l,area,peri;
    scanf("%d%d",&l,&b);
    area=l*b;
    peri=2*(l+b);
    if((area>peri)==1)
        printf("area is greter");
    else
        printf("perimeter is greater");

}
