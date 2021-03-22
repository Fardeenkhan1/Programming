#include<bits/stdc++.h>
#define mod 1000000007
#define INF 1000000000
const double PI = 3.141592653589793238460;

using namespace std;
const int maxN = 100001;

//THIS ALGORITHM IS USEF TO FIND THE CYCLE IN AN ARRAY WITH LINEAR TIME COMPLEXITY OF Big-Oh(N)

int findDuplicate(int A[],int N)
{
    int tortoise = A[0],hare = A[0];
    while(true)
    {
        tortoise = A[tortoise];
        hare = A[A[hare]];
        if(tortoise == hare)
            break;
    }
    int ptr1 = A[0];
    int ptr2 = tortoise;
    while(ptr1 != ptr2)
    {
        ptr1 = A[ptr1];
        ptr2 = A[ptr2];
    }
    return ptr1;
}
main()
{
    int N,temp;
    int A[maxN];
    cout<<"Enter N\n"; cin>>N;
    cout<<"Enter "<<N+1<<" array elements\n";
    for(int i = 0 ; i < N+1 ; i++)
        cin>>A[i];
    int Ans = findDuplicate(A,N+1);
    cout<<"Repeated Element Is : "<<Ans<<"\n";

}
