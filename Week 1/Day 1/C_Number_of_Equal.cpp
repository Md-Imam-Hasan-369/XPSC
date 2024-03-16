#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    long long l=0,r=0,ans=0;
    while(l < n)
    {
        int cnt1=0,cnt2=0, cur=a[l];
        while(cur==a[l] && l<n)
        {
            cnt1++;
            l++;
        }
        while(cur > b[r] && r<m) r++;
        while(cur==b[r] && r<m)
        {
            cnt2++;
            r++;
        }
        
        ans += 1LL * cnt1*cnt2;
    }
    cout<<ans<<"\n";
    return 0;
}