#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int t, n, x, y, i;
    unordered_map<int, int> umap_x;
    unordered_map<int, int> umap_y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( i = 1 ; i <= 4*n - 1 ; i++)
        {
            cin>>x>>y;
            if(umap_x.find(x) == umap_x.end())
                umap_x.insert(make_pair(x, 1));
            else
            {
                 unordered_map<int, int>::iterator it = umap_x.find(x);
                 if(it != umap_x.end())
                    umap_x.erase(it);

            }
            if(umap_y.find(y) == umap_y.end())
                umap_y.insert(make_pair(y, 1));
            else
            {
                 unordered_map<int, int>::iterator it = umap_y.find(y);
                 if(it != umap_y.end())
                    umap_y.erase(it);

            }
        }
        x = umap_x.begin()->first;
        y = umap_y.begin()->first;
        cout<<x<<" "<<y;
        umap_x.clear();
        umap_y.clear();
    }
}

