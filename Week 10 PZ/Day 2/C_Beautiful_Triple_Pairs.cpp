#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        vector<ll> ar(n);
        for(ll &i:ar) cin>>i;

        map<pair<ll,ll>,ll> ab;
        map<pair<ll,ll>,ll> bc;
        map<pair<ll,ll>,ll> ac;
        map<vector<ll>,ll> ab3;
        map<vector<ll>,ll> bc3;
        map<vector<ll>,ll> ac3;
        
        ll ans = 0;
        for (ll i=0;i<n-2;i++)
        {
            ll a = ar[i];
            ll b = ar[i+1];
            ll c = ar[i+2];
            
            ab[{a,b}]++;
            bc[{b,c}]++;
            ac[{a,c}]++;
            
            vector<ll> triple = {a,b,c};
            ab3[triple]++;
            bc3[triple]++;
            ac3[triple]++;
            
            ans = ans+ab[{a,b}] - ab3[triple];
            ans = ans+bc[{b,c}] - bc3[triple];
            ans = ans+ac[{a,c}] - ac3[triple];
        }
        cout<<ans<<'\n';
    }
    return 0;
}