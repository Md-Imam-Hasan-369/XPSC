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

bool isPrime(ll n)
{
    if(n==1) return false;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
bool isPerfectSquare(ll n)
{
    ll x = sqrtl(n);
    return (x*x)==n;
}

int main()
{
    Code By Imam
    int n; cin>>n;
    vector<ll> ar(n);
    for(ll &i:ar) cin>>i;
    
    for(ll i=0;i<n;i++)
    {
        if(isPrime(sqrtl(ar[i])) && isPerfectSquare(ar[i]))
            cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}