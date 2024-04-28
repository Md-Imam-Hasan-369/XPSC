#include<bits/stdc++.h>
#define ll long long
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
        vector<ll> ar(n);
        for(ll &i:ar) cin>>i;

        //prefix sum
        vector<ll>pref(n);
        pref[0]=ar[0];
        for(ll i=1;i<n;i++)
            pref[i] = ar[i]+pref[i-1];
        //maximum value store 
        vector<ll> mx(n);
        mx[0]=ar[0];
        for(int i=1;i<n;i++)
            mx[i] = max(mx[i-1],ar[i]);

        while(q--)
        {
            ll x; cin>>x;
            auto it = upper_bound(mx.begin(),mx.end(),x);
            ll idx = it - mx.begin() -1;
            
            if(idx>=0) cout<<pref[idx]<<" ";
            else cout<<0<<" ";
        }
        cout<<endl;
    }
    return 0;
}