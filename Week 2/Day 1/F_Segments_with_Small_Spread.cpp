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
    for(int i=0;i<n;i++) cin>>ar[i];

    multiset<ll>ml;
    ll l=0,r=0,ans=0;

    while(r<n)
    {
        ml.insert(ar[r]);
        ll mx = *ml.rbegin();
        ll mn = *ml.begin();
        if((mx-mn) <= k)
        {
            ans += (r-l+1);
        }
        else
        {
            
            while(l<r)
            {
                ll mx = *ml.rbegin();
                ll mn = *ml.begin();

                if((mx-mn) <= k) break;

                auto it = ml.find(ar[l]);//l er contibution delete from multiset
                ml.erase(it);
                l++;
            }
            ll mx = *ml.rbegin();
            ll mn = *ml.begin();
            if((mx-mn) <=k)
            {
                ans += (r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<endl;
    return 0;
}