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
    ll l,r;
    cin>>l>>r;
    cout<<"YES"<<'\n';  
    while(l<r)
    {                          //ekta odd and ekta even number a gcd always 1 hoy
        cout<<l<<" "<<l+1<<'\n';
        l +=2;
    }
    return 0;
}