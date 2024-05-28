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

int32_t main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;

        set<ll> s;
        ll sum=0;
        int i=0;
        while(i<n)
        {
            if(ar[i]>0)
            {
                while(ar[i]>0 && i<n)
                {
                    s.insert(ar[i]);
                    i++;
                }
            }
            else
            {
                while(ar[i]<0 && i<n)
                {
                    s.insert(ar[i]);
                    i++;
                }
            }

            sum += *s.rbegin();
            s.clear();
        }
        
        cout<<sum<<'\n';
    }
    return 0;
}