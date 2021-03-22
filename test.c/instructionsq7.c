#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<math.h>
#include<stdio.h>
#define PI 0.0175
void trig(float);
main()
{
    float num;
    printf("enter angle");
    scanf("%f",&num);
    trig(num);
}
void trig(float p)
{
float* ptr;
int i;
ptr =(float*)malloc(6*sizeof(float));
*(ptr+0)=sin(p*PI);
*(ptr+1)=cos(p*PI);
*(ptr+2)=tan(p*PI);
*(ptr+3)=(1/sin(p*PI));
*(ptr+4)=(1/cos(p*PI));
*(ptr+5)=(1/tan(p*PI));
for(i=0;i<6;i++)
{
printf("%f\n",*(ptr+i));
}
free(ptr);
}
