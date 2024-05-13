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
    ll n,a,b,p,q;
    cin>>n>>a>>b>>p>>q;
    ll ans=0;
    ans += (n/a)*p;
    ans += (n/b)*q;
    ll overlap = n/lcm(a,b);
    ans -= overlap*(p+q);
    ans += overlap*max(p,q);
    cout<<ans<<'\n';
    return 0;
}