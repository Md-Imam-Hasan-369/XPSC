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
    ll x; cin>>x;
    pair<int,int> p;
    for(ll i=1;i*i<=x;i++)
    {
        if(x%i==0)
        {
            ll a=i;
            ll b=x/i;
            if(lcm(a,b)==x)
            {
                p.first=a;
                p.second=b;
            }
        }
    }
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}