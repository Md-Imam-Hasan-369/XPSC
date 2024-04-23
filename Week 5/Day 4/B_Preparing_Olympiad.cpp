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
    ll n,l,r,x;
    cin>>n>>l>>r>>x;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    ll cnt=0;
    for(ll i=0;i<(1<<n);i++)
    {
        ll sum=0;
        ll mx = LLONG_MIN;
        ll mn = LLONG_MAX;
        for(ll k=0;k<n;k++)
        {
            if((i>>k)&1 !=0)
            {
                sum += ar[k];
                mx = max(mx,ar[k]);
                mn = min(mn,ar[k]);
            }
        }
        ll sub = mx-mn;
        if(sum>=l && sum<=r && sub>=x)
            cnt++;
    }
    cout<<cnt<<'\n';
    return 0;
}