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
    int ar[n];
    for(int i=0;i<n;i++) cin>>ar[i];
 
    int l=0,r=0,ans=0;
    ll sum=0;
    while(r<n)
    {
        sum += ar[r];
        if(sum<=s)
        {
            ans = max(ans,r-l+1);
            r++;
        }
        else
        {
            sum -= ar[l];
            l++;
            r++;
        }
    }
    cout<<ans<<endl;
    return 0;
}