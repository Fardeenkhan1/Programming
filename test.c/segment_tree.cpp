#include<bits/stdc++.h>
using namespace std;

# define l1 long long

l1 int query(l1 node, l1 start, l1 end, l1 l, l1 r, l1 * tree)
{
    if(l>r)
        return 0;

    if(l == start and end == r)
        return tree[node];

    l1 mid = (start + end)/2;

    l1 p1,p2;
    p1 = query(2 * node, start, mid, l, min(r,mid), tree);
    p2 = query(2 * node + 1, mid + 1, end, max(l,mid+1), r, tree);

    return (p1 + p2);
}

void update(l1 node, l1 start, l1 end, l1 idx, l1 val, l1 *tree, l1 *A)
{
    if(start == end)
    {
        tree[node] = val;
        A[idx] = val;
    }
    else
    {
        l1 mid = (start + end)/2;
        if(start <= idx && idx <= mid)
        {
            update(2 * node, start, mid, idx, val, tree, A);
        }
        else
        {
            update(2 * node + 1, mid+1, end, idx, val, tree, A);
        }
        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}
void build(l1 node, l1 start, l1 end, l1 *tree, l1 *A)
{
    if(start == end)
    {
        tree[node] = A[start];
    }
    else
    {
        l1 mid = (start + end)/2;
        build(2 * node,    start,    mid, tree, A);

        build(2 * node + 1, mid + 1, end, tree, A);

        tree[node] = tree[2 * node] + tree[2 * node + 1];
    }
}
int main()
{
    l1 A[100000], Segment_Tree[100000], N, i, choice, l, r, idx, val, quer;
    bool success = true;
    printf("Enter N\n");
    scanf("%lli",&N);
    printf("Enter elements\n");
    for( i = 0 ; i < N ; i++ )
        scanf("%lli",&A[i]);

    l1 height = (int)(ceil(log2(2*N-1)));

    build(1, 0, N-1, Segment_Tree,A);

    while(success)
    {
        printf("1. to update\n2. to query\n3. display\n");
        scanf("%lli",&choice);
        switch(choice)
        {
        case 1:
            printf("enter idx and val\n");
            scanf("%lli%lli",&idx,&val);
            update(1, 0, N-1, idx, val, Segment_Tree, A);
            break;

        case 2:
            printf("enter range\n");
            scanf("%lli%lli",&l,&r);
            quer = query(1, 0, N-1, l, r, Segment_Tree);
            printf("%lli\n",quer);
            break;

        case 3:
            printf("Segment Tree\n");
            for(i = 1 ; i <= pow(2, height) - 1 ; i++)
                printf("%lli ",Segment_Tree[i]);
            printf("\nArray\n");
            for( i = 0 ; i < N ; i++)
                printf("%lli ",A[i]);
            printf("\n");
            break;
        default:
            success = false;
        }
    }

    return 0;
}
