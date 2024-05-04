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
    vector<ll> a(n),b(n);
    for(ll &i:a) cin>>i;
    for(ll &i:b) cin>>i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end(),greater<ll>());

    //lamda function
    auto ok = [&](ll mid)
    {
        ll cnt=0;
        ll i=0,j=0;
        while(i<n && j<n)
        {
            if(a[i]+b[j] >= mid) 
                j++;
            else
            {
                i++;
                cnt +=(n-j);
            }
        }
        return cnt<k;
    };
    //binary search on answer
    ll l=1, r=1e15, ans;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<'\n';
    return 0;
}