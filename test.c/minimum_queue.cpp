#include<bits/stdc++.h>
#include<deque>
using namespace std;

#define lli long long

void print_M_minimum(lli *A, lli N, lli M)
{
    lli i;
    deque<lli> q(M);
    for( i = 0 ; i < M ; i++ )
    {
        while( !q.empty() && A[i] < A[q.back()] )
            q.pop_back();
        q.push_back(i);
    }
    for( ; i < N ; i++)
    {
        printf("%lli\n",A[q.front()]);

        while( !q.empty() && q.front() <= i - M)
            q.pop_front();

        while( !q.empty() && A[i] < A[q.back()])
            q.pop_back();
        q.push_back(i);
    }
    printf("%lli\n",A[q.front()]);
}
int main()
{
    lli A[100000], N, i, M;
    printf("Enter N\n");
    scanf("%lli",&N);
    printf("Enter array element\n");
    for( i = 0 ; i < N ; i++ )
        scanf("%lli",&A[i]);
    printf("Enter M\n");
    scanf("%lli",&M);
    print_M_minimum(A,N,M);
    return 0;
}
