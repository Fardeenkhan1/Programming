/*
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;
const int MAX = 1e4 + 5;
int id[MAX], nodes, edges;
pair <long long, pair<int, int> > p[MAX];

void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        if(root(x) != root(y))
        {
            minimumCost += cost;
            union1(x, y);
        }
    }
    return minimumCost;
}

int main()
{
    int x, y;
    long long weight, cost, minimumCost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost << endl;
    return 0;
}
*/
#include<bits/stdc++.h>
#include<algorithm>
#include<iostream>

using namespace std;

const int maxN = 100001;
struct node
{
    long long int a[10];
};
struct edge
{
    long long int a;
    long long int b;
    long long int w;
};

node S[100001];
edge A[100001];

long long int par[100001];

bool comp(edge a, edge b)
{
    if(a.w > b.w)
        return true;
    return false;
}

int find(long long int a)
{
    if(par[a] == -1) return a;
    return par[a] = find(par[a]);
}

void merge(int a, int b)
{
    par[a] = b;
}
int main()
{
    long long int jk = 0,z,sum = 0,a,b;
    long long int N,D,i,j,item;
    cin>>N>>D;
    for(i = 0 ; i < N ; i++)
    {
        jk = 0;
        for(j = 0 ; j < D ; j++)
        {
            cin>>item;
            S[i].a[jk] = item;
            jk++;
        }
    }
    long long int total_edges = (N*(N-1))/2, edge_number = 0;
    for(i = 0 ;i < N ; i++) par[i] = -1;
    for(i = 0 ; i < N ; i++)
    {
        for(j = i+1 ; j < N ; j++ )
        {
            if(i != j)
            {
                A[edge_number].a = i+1;
                A[edge_number].b = j+1;
                long long int weight = 0;
                for(z = 0 ; z < D ; z++ ) weight += abs(S[i].a[z] - S[j].a[z]);
                A[edge_number].w = weight;
                edge_number++;
            }
        }
    }

    /*for(i = 0 ; i < total_edges ; i++)
    {
        cout<<A[i].a<<" "<<A[i].b<<" "<<A[i].w<<"\n";
    }*/
    sort(A,A + total_edges, comp);
    for(i = 0 ; i < total_edges ; i++)
    {
        a = find(A[i].a);
        b = find(A[i].b);
        if(a != b)
        {
            sum += A[i].w;
            merge(a,b);
        }
    }
    cout<<sum<<"\n";
    /*for(i = 0 ; i < N ; i++)
    {
        for(auto z = S[i].a.begin() ; z != S[i].a.end() ; z++)
            cout<<*z<<" ";
    }*/
}
