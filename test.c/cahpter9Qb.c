#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
#include<stdio.h>
int ret(int,int,int,float*,float*);
main()
{
    int m1,m2,m3;
    float avg,per;
    printf("enter marks in three subjects\n");
    scanf("%d%d%d",&m1,&m2,&m3);
   ret(m1,m2,m3,&avg,&per);
   printf("average marks=%f\npeercentage=%f",avg,per);
}
int ret(int m1,int m2,int m3,float *avg,float *per)
{
    *avg=(m1+m2+m1)/3;
    *per=0.3*(m1+m2+m3);
}
