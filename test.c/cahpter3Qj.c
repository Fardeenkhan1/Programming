#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
main()
{
    int area,x1,y1,x2,y2,x3,y3;
    printf("enter coordiantes\n");
    scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
    area= (0.5*((x1*(y2-y3))*(x2*(y3-y1))*(x3*(y1-y2))));
    area==0?printf("points lie in a straight line"): printf("points don't lie in a straight line");
}
