#include<bits/stdc++.h>
#define mod 1000000007
#define pp push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
#define INF 1000000000
#define endl '\n'
const double PI = 3.141592653589793238460;

using namespace std;
const int maxN = 100001;

vector<pair<int ,int >> adj[maxN];

int main()
{
    int i,edges,vertices,a,b,weight;
    cout<<"Enter No' of Vertices\n";
    cin>>vertices;
    cout<<"Enter No' of Edges\n";
    cin>>edges;
    cout<<"Enter edges from a to b with weight w\n";
    for(i = 0 ; i < edges ; i++)
    {
        cin>>a>>b>>weight;
        adj[a].push_back({b,weight});
        adj[b].push_back({a,weight});
    }
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
    vector<int> dist(vertices+1,INF);
    pq.push({0,1});
    dist[1] = 0;
    while(!pq.empty())
    {
        int curr_vertex = pq.top().second;
        int curr_weight = pq.top().first;
        pq.pop();
        for(pair<int,int> edge : adj[curr_vertex])
        {
            if(curr_weight + edge.second < dist[edge.first])
            {
                dist[edge.first] = curr_weight + edge.second;
                pq.push({dist[edge.first],edge.first});
            }
        }
    }
    for(i = 1 ; i <= vertices ; i++)
        cout<<dist[i]<<" ";
    return 0;
}
/*
6 9
1 2 4
1 6 2
2 3 5
2 6 1
6 3 8
6 5 10
3 4 6
3 5 3
5 4 5
*/
