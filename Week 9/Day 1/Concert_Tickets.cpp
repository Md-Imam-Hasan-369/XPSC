#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,m;
    cin>>n>>m;
    multiset<ll> st;
    for(int i=0;i<n;i++)
    {
        int x; cin>>x;
        st.insert(x);
    }

    while(m--)
    {
        ll x; cin>>x;
        auto it = st.upper_bound(x);
        
        if(it==st.begin()) cout<<-1<<'\n';
        else 
        {
            it--;
            cout<<*it<<'\n';
            st.erase(it);
        }
    }
    return 0;
}