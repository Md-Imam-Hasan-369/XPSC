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
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll> ar(n);
        for(ll i=0;i<n;i++) cin>>ar[i];

        ll l=0,r=0,cnt=0;
        multiset<ll> ms;
        vector<ll> v;

        while(r<n)
        {
            ms.insert(ar[r]);
            if((r-l+1) < k)
            {
                r++;
            }
            else
            {
                ll mx_val = *ms.rbegin();
                if(mx_val <= q)
                    cnt++;
                else
                {
                    v.push_back(cnt);
                    cnt=0;
                }
                auto it = ms.find(ar[l]);//ei vabe set theke single value find korte hoy
                ms.erase(it);
                l++,r++;
            }
        }
        
        v.push_back(cnt);
        ll ans=0;
        for(ll val:v)
            ans += (val*(val+1))/2;
        cout<<ans<<"\n";
    }
    return 0;
}