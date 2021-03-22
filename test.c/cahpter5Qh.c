#include<stdio.h>
main()
{
    int num,rem;
    float res=0;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        res=(res*0.1+ rem);
        num/10;
    }
    printf("%f",res);
}
