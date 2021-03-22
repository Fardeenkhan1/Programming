#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<math.h>
#include<stdio.h>
main()
{
    int wcf,t,v;
    printf("enter temperature\n");
    scanf("%d",&t);
    printf("input velocity\n");
    scanf("%d",&v);
    wcf=35.74 + 0.6215*t + (0.4275*t - 35.75)*(pow(v,0.16));
    printf("%d",wcf);

}
