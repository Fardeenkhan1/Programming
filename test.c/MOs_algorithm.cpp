#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

static int block;
struct Query
{
    int L;
    int R;
};

bool compare(Query A, Query B)
{
    //Different block sort by block
    if(A.L/block != B.L/block)
        return A.L/block < B.L/block;
    //Same block, sort by R value
    return A.R < B.R;
}
void QueryResults(int A[], int N, Query Q[], int M)
{
    //find the block size
    block = (int)sqrt(N);

    //sort all quries so that queries of same blocks are arranged together
    sort(Q, Q + M, compare);
    /*for(int i=0;i<M;i++)
    {
        cout<<"{"<<Q[i].L<<","<<Q[i].R<<"}"<<endl;
    }*/
    int current_L = 0, current_R = 0;
    int current_sum = 0;

    for( int i = 0 ; i < M ; i++)
    {
        int L = Q[i].L, R = Q[i].R;
        while(current_L < L)
        {
            current_sum -= A[current_L];
            current_L++;
        }
        while(current_L > L)
        {
            current_sum += A[current_L - 1];
            current_L--;
        }
        while(current_R <= R)
        {
            current_sum += A[current_R];
            current_R++;
        }
        while(current_R > R+1)
        {
            current_sum -= A[current_R-1];
            current_R--;
        }
        printf("Sum of [%d, %d] is %d\n",L,R,current_sum);
    }
}
int  main()
{
    int A[] = {1, 1, 2, 1, 3, 4, 5, 2, 8};
    int N  =sizeof(A)/sizeof(A[0]);
    Query Q[] = {{0, 4}, {1, 3}, {2, 4}};
    int M = sizeof(Q)/sizeof(Q[0]);
    QueryResults(A,N,Q,M);
    return 0;
}
