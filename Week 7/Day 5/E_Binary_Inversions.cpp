#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        ll one=0;
        vector<ll> a(n);
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==1) one++;
        }

        vector<ll> b=a,c=a;
        
        //case 1
        ll tmp1 = one;
        ll ans1 = 0;
        for(ll i=n-1;i>=0;i--)
        {
            if(a[i]==0 && tmp1>0)
                ans1 += tmp1;
            else tmp1--;
        }
        //case 2
        for(ll i=0;i<n;i++)
        {
            if(b[i]==0)
            {
                b[i]=1;
                break;
            }
        }
        ll tmp2 = one+1;
        ll ans2 = 0;
        for(ll i=n-1;i>=0;i--)
        {
            if(b[i]==0 && tmp2>0)
                ans2 += tmp2;
            else tmp2--;
        }
        //case 3
        for(ll i=n-1;i>=0;i--)
        {
            if(c[i]==1)
            {
                c[i]=0;
                break;
            }
        }
        ll tmp3 = one-1;
        ll ans3 = 0;
        for(ll i=n-1;i>=0;i--)
        {
            if(c[i]==0 && tmp3>0)
                ans3 += tmp3;
            else tmp3--;
        }

        ll ans = max({ans1,ans2,ans3});
        cout<<ans<<'\n';
    }
    return 0;
}
