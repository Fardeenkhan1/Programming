#include<bits/stdc++.h>
#include<iostream>
#include<queue>

using namespace std;
const int maxN = 100001;

int main()
{
    int N,X,p,k,T,i,k_small,p_small,A[maxN];
    cin>>T;
    while(T--)
    {
        cin>>N>>X>>p>>k;
        for(i = 0 ; i < N ; i++)
            cin>>A[i];
        sort(A,A+N);
        k_small = A[k-1];
        p_small = A[p-1];
        if(p_small == X)
            cout<<0<<"\n";
        else if(k <= p && X >= p_small)
        {
            int right = 1;
            for(i = p ; i < N ; i++)
            {
                if(A[i] < X)
                    right++;
                else
                    break;
            }
            cout<<right<<"\n";
        }
        else if(k >= p && X <= p_small)
        {
            int left = 1;
            for(i = p-2; i >= 0 ; i--)
            {
                if(A[i] > X)
                    left++;
                else
                    break;
            }
            cout<<left<<"\n";
        }
        else
            cout<<-1<<"\n";
    }
}
