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
    ll n,k;
    cin>>n>>k;
    vector<ll> ar(n);
    for(ll &i:ar) cin>>i;

    //lamda function
    auto ok = [&](ll mid)
    {
        ll cnt=1;
        for(int i=0;i<n;i++)
        {
            ll j = i+1;
            while(j<n && (ar[i]+mid) > ar[j]) j++;
            if(j==n) break;
            cnt++;
            i = j-1;
        }
        return cnt>=k;
    };

    //binary search on answer
    ll l=0,r=1e15;
    ll ans=0;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<'\n';
    return 0;
}