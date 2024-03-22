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

    ll l=0,r=0,ans=0;
    unordered_map<int,int>mp;
    
    while(r<n)
    {
        mp[ar[r]]++;
        while(mp.size() > k)
        {
            mp[ar[l]]--;
            if(mp[ar[l]] == 0)
            {
                mp.erase(ar[l]);
            }
            l++;
        }
        ans += (r-l+1);
        r++;
    }
    // cout<<mp.size()<<endl;
    cout<<ans<<endl;
    // for(auto it=mp.begin();it!=mp.end();it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }
    return 0;
}