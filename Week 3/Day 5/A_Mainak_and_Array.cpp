#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    int ans = ar[n-1]-ar[0];
    for(int i=0;i<n-1;i++)
        ans = max(ans, ar[i]-ar[i+1]);
    for(int i=1;i<n;i++)
        ans = max(ans, ar[i-1]-ar[i]);
    for(int i=0;i<n-1;i++)
        ans = max(ans, ar[n-1]-ar[i]);
    for(int i=1;i<n;i++)
        ans = max(ans, ar[i]-ar[0]);
    cout<<ans<<'\n';
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}