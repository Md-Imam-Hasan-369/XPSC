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

    ll tc; cin>>tc;
    while(tc--)
    {
        ll n; cin>>n;
        vector<ll> ar(n);
        for(auto &i:ar) cin>>i;

        ll sum=0,neg=0;
        ll mn = LLONG_MAX;
        for(ll i=0;i<n;i++)
        {
            sum += abs(ar[i]);
            mn = min(mn,abs(ar[i]));
            if(ar[i]<0) neg++;
        }

        if(neg%2 != 0)
        {
            sum -= (2*mn);
        }
        cout<<sum<<'\n';
    }
    return 0;
}