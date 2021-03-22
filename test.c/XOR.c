#include<stdio.h>
#include<stdbool.h>
bool fun(long long int x)
{
    x ^= x>>32;
    x ^= x>>16;
    x ^= x>>8;
    x ^= x>>4;
    x ^= x>>2;
    x ^= x>>1;
    return !(x & 1);
}
main()
{
    long long int T,N,Q,A[100000],P,i,j,odd,even;
    scanf("%lli",&T);
    while(T)
    {
        odd = 0;
        even = 0;
        scanf("%lli%lli",&N,&Q);
        for(i=0;i<N;i++)
            scanf("%lli",&A[i]);
        for(i=0;i<N;i++)
        {
            if(fun(A[i]^1))
                even++;
            else
                odd++;
        }
        for(i=0;i<Q;i++)
        {
            scanf("%d",&P);
            if(fun(P))
                printf("%lli %lli",odd,even);
            else
                printf("%lli %lli",even,odd);
        }
        T--;
    }
}
