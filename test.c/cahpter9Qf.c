#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void clrscr()
{
    system("@cls||clear");
}
float dis(int,int,int,int);
float ar(int,int,int,int,int,int,float *,float *);
main()
{
    int x1,x2,x3,y1,y2,y3;
    float area,S;
    printf("enter x1 & y1\n");
    scanf("%d%d",&x1,&y1);
    printf("enter x2 & y2\n");
    scanf("%d%d",&x2,&y2);
    printf("enter x3 & y3\n");
    scanf("%d%d",&x3,&y3);
    ar(x1,y1,x2,y2,x3,y3,&S,&area);
    printf("%f",area);
}
float ar(int x1,int y1,int x2,int y2,int x3,int y3,float *S,float *area)
{
    float a,b,c;
    a=dis(x1,y1,x2,y2);
    b=dis(x2,y2,x3,y3);
    c=dis(x3,y3,x1,y1);
    *S=(a+b+c)/2;
    printf("%f\n%f\n%f\n",a,b,c);
    printf("%f\n",*S);
    *area=sqrt((*S)*(*S-a)*(*S-b)*(*S-c));
}
float dis(int x1,int y1,int x2,int y2)
{
    float distance;
    distance=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    return(distance);
}
