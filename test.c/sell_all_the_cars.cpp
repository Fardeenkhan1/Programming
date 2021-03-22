#include<stdio.h>
#include <bits/stdc++.h>
#include<algorithm>
#include<stdbool.h>

# define lli long long int
using namespace std;

bool great(lli a, lli b)
{
    return a > b;
}
int main()
{
	lli T,N,arr[100000],i;
	scanf("%lli",&T);
    while(T--)
    {
        lli ans = 0, counter = 0;
        scanf("%lli",&N);
        for(i=0;i<N;i++)
            scanf("%lli",&arr[i]);
        sort(arr, arr + N, great);
        for(i=0;i<N;i++)
        {
            lli temp = arr[i] - counter;
            if(temp >= 0)
            {
                ans += arr[i] - counter;
                counter++;
            }
            else
                break;
        }
        printf("%lli\n",ans);
    }
	return 0;
}
