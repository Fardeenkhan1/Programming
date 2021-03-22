#include<stdio.h>
#include<stdlib.h>
void clrscr()
{
    system("@cls||clear");
}
main()
{
    int h,ts,i=0;
    float cc;
    printf("enter hardness,carbon content,tensile strength\n");
    scanf("%d%f%d",&h,&cc,&ts);
    if(h>50)
    {
        i++;
        if(cc<0.7)
        {
            i++;
            if(ts>5600)
            {
                printf("Grade is 10\n");
            }else
            {
                printf("Grade is 9\n");
            }
        }else
        {
            if(ts>5600)
            {
                i++;
                printf("Grade is 7");
            }
        }
    }else
    {
        if(cc<0.7)
        {
            i++;
            if(ts>5600)
            {
                i++;
                printf("Grade is 8\n");
            }
        }else
        {
            if(ts>5600)
                i++;
        }
    }
  if(i==1)
  printf("Grade is 6\n");
  else if(i==0)
    printf("Grade is 5\n");
}
