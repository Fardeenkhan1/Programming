#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;
int main()
{
    long long int N,i,j,x;
    scanf("%lli",&N);
    vector<bool> IsPrime(N + 1, true);
    IsPrime[0] = false;
    IsPrime[1] = false;

    for(i = 2 ; i*i <= N ; i++)
    {
        if(IsPrime[i])
        {
            for(j = i*i ; j <= N ; j += i )
            {
                IsPrime[j] = false;
            }
        }
    }

     for(i = 2 ; i <= IsPrime.size() - 1; i++ )
     {
         if(IsPrime[i])
            printf("%lli ",i);
     }
    printf("\n");
    return 0;
}


