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
    ll n,s;
    cin>>n>>s;
    vector<ll> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    ll l=0,r=0,ans=INT_MAX;
    ll sum=0;
    while(r<n)
    {
        sum += ar[r];
        while(sum>=s)
        {
            ans = min(ans,(r-l+1));
            sum -= ar[l];
            l++;
        }
        r++;
    }

    if(ans!=INT_MAX) cout<<ans<<"\n";
    else cout<<-1<<"\n";
    return 0;
}