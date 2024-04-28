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
        vector<ll> ar(k);
        for(ll &i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        ll ans=0, c=0;
        for(int i=k-1;i>=0;i--)
        {
            if(ar[i] <= c)
                break;
            c += n-ar[i];
            ans++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}