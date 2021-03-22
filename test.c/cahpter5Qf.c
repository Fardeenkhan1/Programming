#include<stdio.h>
main()
{
    int c1=0,c2=0,c3=0,i,r,num;
    printf("enter range\n");
    scanf("%d",&r);
    for(i=0;i<r;i++)
    {
     scanf("%d",&num);
     if(num>0)
        c1++;
     if(num<0)
        c2++;
     if(num==0)
        c3++;
    }
    printf("positive numbers are %d \n",c1);
    printf("negative  numbers are %d \n",c2);
    printf("zeroes are %d \n",c3);
}
