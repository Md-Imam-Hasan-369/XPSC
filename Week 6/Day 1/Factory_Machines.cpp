#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);
 
bool ok(ll mid, ll t, ll n, vector<ll>& ar)
{   
    ll total=0;
    for(int i=0;i<n;i++)
    {
        total += mid/ar[i];
        if(total>=t)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    Code By Imam
    ll n,t;
    cin>>n>>t;
    vector<ll> ar(n);
    for(ll &i:ar) cin>>i;
    
    //Binary Search on answer
    ll l=0,r=1e18, ans;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(ok(mid,t, n,ar))
        {
            ans = mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<'\n';
    return 0;
}