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
    ll n,s;
    cin>>n>>s;
    vector<ll> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    ll l=0,r=0,ans=0;
    ll sum=0;
    while(r<n)
    {
        sum += ar[r];
        while(sum>=s)
        {
            ans += n-r;
            sum -= ar[l];//contibution delete from sum
            l++;
        }
        r++;
    }

    cout<<ans<<endl;
    return 0;
}