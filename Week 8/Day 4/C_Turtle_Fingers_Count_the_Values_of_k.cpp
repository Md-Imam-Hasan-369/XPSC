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

void imam()
{
    ll a,b,l;
    cin>>a>>b>>l;
    
    ll x=0;
    set<ll> k;
    while(true)
    {
        if(int(pow(a,x)) > l) break;
        if(l%int(pow(a,x))!=0) break;
        ll cur = l/int(pow(a,x));
        k.insert(cur);
        while(cur%b==0)
        {
            cur /=b;
            k.insert(cur);
        }
        x++;
    }
    cout<<k.size()<<endl;
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        imam();
    }
    return 0;
}