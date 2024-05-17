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

bool ok(ll a,ll b)
{
    ll tmp_gcd=gcd(a,b);
    while(tmp_gcd > 1)
    {
        b /=tmp_gcd;
        tmp_gcd = gcd(a,b);
    }
    return b==1;
}

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        
        if(ok(a,b)) cout<<"Yes"<<'\n';
        else cout<<"No"<<'\n';
    }
    return 0;
}