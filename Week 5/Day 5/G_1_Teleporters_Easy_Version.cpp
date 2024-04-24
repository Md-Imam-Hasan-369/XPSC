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
        ll n,c;
        cin>>n>>c;
        vector<ll> ar;
        for(ll i=1;i<=n;i++)
        {
            ll x; cin>>x;
            ar.push_back(x+i);
        }
        sort(ar.begin(),ar.end());

        ll cnt=0;
        for(ll i=0;i<n;i++)
        {
            if(ar[i]<=c)
            {
                cnt++;
                c -= ar[i];
            }
        }
        cout<<cnt<<'\n';
    }
    return 0;
}