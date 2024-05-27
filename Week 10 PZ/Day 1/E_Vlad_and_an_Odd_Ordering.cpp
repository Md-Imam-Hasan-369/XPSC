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

ll fun(ll n,ll k)
{
    ll odd_cnt = (n+1)/2;
    if(k<=odd_cnt)
        return (2*k)-1;
    
    k -=odd_cnt;
    ll cur = 2;//start with multiples of 2
    ll x=0,prev_x=0;
    while(true)
    {
        prev_x=x;
        ll total_multiples = n/cur;
        ll odd_multi = total_multiples/2;//ordek odd number hobe
        if(total_multiples%2!=0)
            odd_multi++;
        x +=odd_multi;
        
        if(x>=k)
            return cur * (2*(k-prev_x)-1);
        cur*=2;
    }
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll ans = fun(n,k);
        cout<<ans<<'\n';
    }
    return 0;
}