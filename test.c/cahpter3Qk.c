#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
float root(int);
float square(int,int,int,int);
#include<math.h>
#include<stdio.h>
main()
{
    int r,x,y,r1,h,k;
    printf("enter the coordinates of center of circle\n");
    scanf("%d%d",&x,&y);
    printf("enter radius of circle\n");
    scanf("%d",&r);
    printf("enter point\n");
    scanf("%d%d",&h,&k);
    r1=square(x,y,h,k);
    if(r1<=r)
        printf("given point lie inside the circle");
    else
        printf("given point don't lie inside the circle");
}
float square(x,y,h,k)
{
   return root((pow(x-h,2)) + (pow(y-k,2)));
}
float root(x)
{
    return(sqrt(x));
}
