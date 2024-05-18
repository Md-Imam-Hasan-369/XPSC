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
        ll a,b;
        cin>>a>>b;

        if(b==1) cout<<"NO"<<'\n';
        else
        {
            cout<<"YES"<<'\n';
            cout<<a<<" "<<a*b<<" "<<a*(b+1)<<'\n';
        }
    }
    return 0;
}