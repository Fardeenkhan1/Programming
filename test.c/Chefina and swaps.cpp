#include<bits/stdc++.h>
#include<unordered_map>
#include<algorithm>
#include<iostream>

#define lli long long int
const int MAX = 200000;
using namespace std;

bool comp1(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
bool comp2(pair<int, int> a, pair<int, int> b)
{
    return a.first > b.first;
}

int main()
{
    int t, n, temp, A[200000], B[200000], i, j;
    unordered_map<int, int> umap_A;
    unordered_map<int, int> umap_B;
    cin>>t;
    while(t--)
    {
        bool success = true;
        cin>>n;
        for(i = 0 ; i < n ; i++)
        {
            cin>>temp;
            if(umap_B.find(temp) == umap_B.end())
            {
                if(umap_A.find(temp) == umap_A.end())
                {
                    umap_A.insert(make_pair(temp, 1));
                }
                else
                {
                    umap_A[temp] += 1;
                }
            }
            else
            {
                unordered_map<int, int>::iterator it = umap_B.find(temp);
                if(it != umap_B.end())
                    umap_B.erase(temp);
            }
        }

        for(i = 0 ; i < n ; i++)
        {
            cin>>temp;
            if(umap_A.find(temp) == umap_A.end())
            {
                if(umap_B.find(temp) == umap_B.end())
                {
                    umap_B.insert(make_pair(temp, 1));
                }
                else
                {
                    umap_B[temp] += 1;
                }
            }
            else
            {
                unordered_map<int, int>::iterator it = umap_A.find(temp);
                if(it != umap_A.end())
                    umap_A.erase(temp);
            }
        }
        //Sorting the unordered map
        sort(umap_A.begin(), umap_A.end(), comp1);
        sort(umap_B.begin(), umap_B.end(), comp2);

        unordered_map<int, int> :: iterator it1 = umap_A.begin();
        unordered_map<int, int> :: iterator it2 = umap_B.begin();
        int ans = 0;
        while(it1 != umap_A.end())
        {
            if(it1->second % 2 == 1 || it2->second % 2 == 1)
            {
                success = false;
                break;
            }
            ans += min(it1->first,it2->first);
            it1++;
            it2++;
        }
        if(success == false)
            cout<<"-1\n";
        else
            cout<<ans<<"\n";

    }
    return 0;
}
