#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> ar(n),xi;
        for(ll &i:ar) cin>>i;
        for(ll i=0;i<q;i++)
        {
            int x; cin>>x;
            if(xi.empty() || xi.back()>x)
                xi.push_back(x);
        }

        for(int i=0;i<n;i++)
        {
            for(auto x:xi)
            {
                if(ar[i]%(1<<x)==0)
                {
                    x--;
                    ar[i] += (1<<x);
                }
            }
        }

        for(ll i:ar) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}