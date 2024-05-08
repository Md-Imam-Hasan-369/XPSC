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
        ll n,k;
        cin>>n>>k;
        vector<ll> pos,neg;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            if(x>0) pos.push_back(x);
            else if(x<0) neg.push_back(abs(x));
        }
        sort(pos.begin(),pos.end(),greater<ll>());
        sort(neg.begin(),neg.end(),greater<ll>());
        
        ll ans = 0;
        for(ll i=0;i<pos.size();i+=k)
            ans += 2*pos[i];
        for(ll i=0;i<neg.size();i+=k)
            ans += 2*neg[i];
        // cout<<ans;
        ans-=max( (pos.empty()?0:pos.front()),(neg.empty()?0:neg.front()));
        cout<<ans<<'\n';
    }
    return 0;
}