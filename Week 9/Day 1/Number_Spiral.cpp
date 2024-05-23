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
        ll y,x;
        cin>>y>>x;

        ll n=max(y,x);
        ll ans=0;
        if(n%2==0)
        {
            if(y==n) ans = (n*n)-(x-1);
            else ans = (n-1)*(n-1)+y;
        }
        else
        {
            if(x==n) ans = (n*n)-(y-1);
            else ans = (n-1)*(n-1)+x;
        }
        
        cout<<ans<<'\n';
    }
    return 0;
}