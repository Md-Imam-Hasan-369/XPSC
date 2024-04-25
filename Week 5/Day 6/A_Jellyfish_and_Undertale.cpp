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
        ll mx_time, initial_time, n;
        cin>>mx_time>>initial_time>>n;
        vector<ll> ar(n);
        for(ll &i:ar) cin>>i;

        ll sum=0;
        sum += initial_time-1;
        initial_time=1;
        for(ll i=0;i<n;i++)
        {
            ll mn = min(ar[i]+initial_time, mx_time);
            sum += mn-1;
        }
        cout<<sum+1<<'\n';
    }
    return 0;
}