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
        ll n,x;
        cin>>n>>x;
        vector<ll> ar(n);
        for(ll&i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        //lamda function
        auto ok = [&](ll mid)
        {
            ll cnt=0;
            for(ll i=0;i<n;i++)
            {
                if(ar[i] < mid)
                {
                    cnt += mid-ar[i];
                }
            }
            return cnt<=x;
        };

        ll l=1, r=1e18,ans;
        while(l<=r)
        {
            ll mid = (l+r)/2;
            if(ok(mid))
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
