#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, k1, k, ten, i, j;
    cin>>t;
    while(t--)
    {
        ten = 10;
        cin>>k;
        k1 = k;
        for(i = 1 ; i <= 8 ; i++)
        {
            for(j = 1 ; j <= 8 ; j++)
            {
                if(i == 1 && j == 1)
                {
                    cout<<"O ";
                    k1--;
                }
                else if(k1 > 0)
                {
                    cout<<". ";
                    k1--;
                }
                else if(ten > 0)
                {
                    cout<<"X ";
                    ten--;
                }
                else
                {
                    cout<<". ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}
