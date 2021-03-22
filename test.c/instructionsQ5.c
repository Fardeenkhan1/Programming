#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<math.h>
#include<stdio.h>
#define PI 57.27
void miles(int,int,int,int);
main()
{
    int L1,L2,G1,G2;
    printf("enter latitude\n");
    scanf("%d%d",&L1,&L2);
    printf("enter longitude\n");
    scanf("%d%d",&G1,&G2);
    miles(L1,L2,G1,G2);

}
void miles(L1,L2,G1,G2)
{
    float D;
    D=3963 * (acos(sin(L1) * sin(L2) + cos(L1) * cos(L2) * cos((G2-G1))));
    printf("%f",D);
}
