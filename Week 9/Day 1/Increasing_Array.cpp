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
    int n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;
    
    ll cnt=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]>ar[i+1])
        {
            cnt += ar[i]-ar[i+1];
            ar[i+1] = ar[i];
        }
    }
    cout<<cnt<<'\n';
    return 0;
}