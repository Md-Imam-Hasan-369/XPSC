#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    ll n,k;
    cin>>n>>k;
    vector<ll> ar(n);
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }

    //lamda function
    auto ok = [&](ll mid)
    {
        ll seg=1;
        ll tmp=0;
        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(ar[i]>mid)
            {
                flag=false;
                break;
            }
            if(tmp+ar[i]<=mid)
                tmp+=ar[i];
            else
            {
                tmp=ar[i];
                seg++;
            }
        }
        if(flag && seg<=k)
            return true;
        return false;
    };

    ll l=0,r=sum+100;
    ll ans=0;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<'\n';
    return 0;
}