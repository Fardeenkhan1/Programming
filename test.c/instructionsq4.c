#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
#include<math.h>
#define PI 3.14285714
float squareroot(float);
float power(float , float);
float inverse(float ,float);
main()
{
    float x,y,res1,res2;
    printf("enter cartesian co-ordinates");
    scanf("%f%f",&x,&y);
    res1=power(x,y);
    res2=inverse(x,y);
    printf("cartesian co-ordinates are\t");
    printf("(%f,%f)\n",x,y);
    printf("polar co-ordiantes are    \t");
    printf("(%f,%f)\n",res1,res2);

}
float power(float x,float y)
{
    float res=squareroot(pow(x,2) + pow(y,2));
    return res;
}
float squareroot(float res)
{
    return (sqrt(res));
}
float inverse(float x,float y)
{
    return (180/PI * atan(y/x));
}
