#include<bits/stdc++.h>
//#define REP(1,n) for (int i = 1 , i <= n ; i++ )
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
typedef std::complex<double> Complex;
typedef std::valarray<Complex> CArray;

using namespace std;
const int maxN = 100001;
//(odd, even)
pair<int,int> st[4*maxN];
int val[maxN];

void build(int si, int ss, int se)
{
    if(ss == se)
    {
        if(val[ss]&1)
            st[si] = {1,0};
        else
            st[si] = {0,1};

    return;
    }

    int mid = (ss + se)/2;
    build(2*si, ss, mid);
    build(2*si + 1, mid+1, se);

    st[si].first = st[2*si].first + st[2*si + 1].first;
    st[si].second = st[2*si].second + st[2*si + 1].second;
}
void update(int si, int ss, int se, int index, int value)
{
    if(ss == se)
    {
        if(value&1)
            st[si] = {1,0};
        else
            st[si] = {0,1};
        val[index] = value;
        return;
    }

    int mid = (ss + se)/2;
    if(index <= mid) update(2*si, ss, mid, index, value);
    else update(2*si + 1, mid+1, se, index, value);

    st[si].first = st[2*si].first + st[2*si + 1].first;
    st[si].second = st[2*si].second + st[2*si + 1].second;
}

int getEven(int si, int ss, int se, int qs, int qe)
{
    if(ss > qe || se < qs) return 0;

    if(ss >= qs && se <= qe) return st[si].second;

    int mid = (ss + se)/2;

    int l = getEven(2*si ,ss, mid, qs, qe);
    int r = getEven(2*si +1, mid + 1, se, qs, qe);

    return l+r;

}

int getOdd(int si, int ss, int se, int qs, int qe)
{
    if(ss > qe || se < qs) return 0;

    if(ss >= qs && se <= qe) return st[si].first;

    int mid = (ss + se)/2;

    int l = getOdd(2*si ,ss, mid, qs, qe);
    int r = getOdd(2*si +1, mid + 1, se, qs, qe);

    return l+r;

}
int main()
{
    int n, q, code, l, r, index, value;
    cout<<"Enter size of array\n";
    cin>>n;
    for(int i = 1; i <= n ; i++) cin>>val[i];

    build(1, 1, n);
    cout<<"Enter number of queries\n";
    cin>>q;
    while(q--)
    {
        cout<<"Enter code\n";
        cin>>code;
        if(code == 0)
        {
            cout<<"Enter index & value\n";
            cin>>index>>value;
            if((val[index]%2) == (value%2)) continue;
            else
                update(1, 1, n, index, value);
            cout<<"\n";
        }
        else if(code == 1)
        {
            cout<<"Enter l & r\n";
            cin>>l>>r;
            cout<<getEven(1, 1, n, l, r)<<endl;
        }
        else
        {
            cout<<"Enter l & r\n";
            cin>>l>>r;
            cout<<getOdd(1, 1, n, l ,r)<<endl;
        }
    }
}

