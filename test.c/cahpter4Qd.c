#include<stdlib.h>
#include<stdio.h>
void clrscr()
{
    system("@cls||clear");
}
main()
{
    int x,y,z,max,res;
    printf("enter three sides x,y,z\n");
    scanf("%d%d%d",&x,&y,&z);
    max=x>y?x>z?x:z:y>z?y:z;
    res=x+y+z-max;
    if(res>max)
        {
            if(x==y && y==z)
            {
            printf("equilateral triangle\n");
            }
            else if((x==y || y==z || z==x)&&(x*x + y*y == max*max)||(x*x + z*z == max*max)||(y*y + z*z == max*max))
            {
                printf("isosceles right amgled triangle\n");
            }
            else if(x==y && y==z && z==x)
            {
                printf("isosceles triangle\n");
            }
            else if((x!=y && y!=z)&&(x*x + y*y == max*max)||(x*x + z*z == max*max)||(y*y + z*z == max*max))
            {
                printf("scalene right angled triangle\n");
            }else if(x!=y && y!=z)
            {
                printf("scalene triangle\n");
            }
            else if((x*x + y*y == max*max)||(x*x + z*z == max*max)||(y*y + z*z == max*max))
            {
            printf("rright angled triangle\n");
            }

        }
    else
        printf("triangle is not valid\n");
}
