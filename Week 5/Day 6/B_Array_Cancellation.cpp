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
        ll n; cin>>n;
        ll mx=0;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            mx = max(0LL,mx+x);
        }
        cout<<mx<<'\n';
    }
    return 0;
}