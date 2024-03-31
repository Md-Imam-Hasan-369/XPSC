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
    ll t;cin>>t;
    while(t--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll> ar(n);
        for(ll i=0;i<n;i++) cin>>ar[i];
        vector<ll> pref(n);
        pref[0]=ar[0];
        for(ll i=1;i<n;i++)
        {
            pref[i] = pref[i-1]+ar[i];
        }
        ll t_sum=pref[n-1];

        while(q--)
        {
            ll l,r,k;
            cin>>l>>r>>k;
            r--,l--;//convert index

            ll range_sum;
            if(l==0) range_sum = pref[r];
            else range_sum = pref[r]-pref[l-1];
            ll ans=t_sum-range_sum+k*(r-l+1);

            if(ans%2==1)
            {
                cout<<"YES"<<"\n";
            }
            else cout<<"NO"<<"\n";
        }
    }
    return 0;
}