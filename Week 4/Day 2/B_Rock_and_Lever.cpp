#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
ll bit_size(int x)
{
    ll cnt=0;
    while(x!=0)
    {
        cnt++;
        x = x>>1;
    }
    return cnt;
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        map<ll,ll>mp;
        for(int i=0;i<n;i++)
        {
            ll x; cin>>x;
            ar[i] = bit_size(x);
            mp[ar[i]]++;
        }

        ll ans=0;
        for(auto it:mp)
        {
            ll second = it.second;
            ans += (second*(second-1))/2;//formula for get the ans
        }
        cout<<ans<<endl;
    }
    return 0;
}