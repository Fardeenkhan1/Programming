#include<bits/stdc++.h>
#include<stack>
#include<vector>
using namespace std;

# define lli long long
int main()
{
    stack <pair<lli, lli>> st;
    lli A[100000];
    lli i, N, item, minimum, item_removed;
    printf("Enter size of Array\n");
    scanf("%lli",&N);
    printf("Enter elements\n");
    for( i = 0 ; i < N ; i++ )
    {
        scanf("%lli",&A[i]);
        lli new_min = st.empty() ? A[i] : min(A[i], st.top().second);
        st.push({A[i], new_min});
    }
    for( ;!st.empty();)
    {
        minimum = st.top().second;
        printf("Minimum  = %lli\n",minimum);
        item_removed = st.top().first;
        printf("Item Removed = %lli\n", item_removed);
        st.pop();
    }
    return 0;

}
