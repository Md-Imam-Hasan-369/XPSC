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
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        vector<ll> prefix(n);
        prefix[0]=ar[0];
        for(int i=1;i<n;i++)
        {
            prefix[i] = ar[i]+prefix[i-1];
        }

        ll mx = 0, sum=prefix[n-1];
        for(int i=0;i<n-1;i++)
        {
            mx = max(mx, gcd(prefix[i], sum-prefix[i]));
        }
        cout<<mx<<'\n';
    }
    return 0;
}