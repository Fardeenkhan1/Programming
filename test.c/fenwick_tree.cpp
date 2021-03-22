#include<bits/stdc++.h>

# define l1 long long int

void Build(l1 x, l1 val,l1 N, l1 *bit)
{
    for(;x <= N ; x += x&-x )
        bit[x] += val;
}
void update(l1 x, l1 val, l1 N, l1 *BIT, l1 *A)
{
    l1 temp = x;
    for(;x <= N ; x += x&-x )
    {
        BIT[x] -= A[x];
        BIT[x] += val;
    }
    A[temp] = val;
}

l1 Query(l1 x, l1 *bit)
{
    l1 sum = 0;
    for(; x > 0 ; x -= x&-x)
        sum += bit[x];
    return sum;
}
int main()
{
    l1 A[100000], BIT[100000], N, i, choice, index, val, l, r, ans;
    bool success = true;
    printf("Enter N\n");
    scanf("%lli",&N);
    printf("Enter elements\n");
    for( i = 1 ; i <= N ; i++ )
    {
        scanf("%lli",&A[i]);
    }

    for(i = 1 ; i<= N ; i++ )
    {
        Build(i, A[i], N, BIT);
    }

    while(success)
    {
        printf("1. to update\n2. to query\n3. Display\n");
        scanf("%lli",&choice);
        switch(choice)
        {
        case 1:
            printf("Enter index and value\n");
            scanf("%lli%lli",&index,&val);
            update(index, val, N, BIT, A);
            break;

        case 2:
            printf("enter l and r\n");
            scanf("%lli%lli",&l,&r);
            ans = Query(r, BIT) - Query(l-1, BIT);
            printf("%lli\n",ans);
            break;
        case 3:
            printf("Fenwick Tree\n");
            for(i = 1 ; i <= N ; i++)
                printf("%lli ",BIT[i]);
            printf("\nArray\n");
            for( i = 1 ; i <= N ; i++)
                printf("%lli ",A[i]);
            printf("\n");
            break;
        default:
            success = false;
        }
    }


    return 0;
}
