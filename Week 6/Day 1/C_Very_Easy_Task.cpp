#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,x,y;
    cin>>n>>x>>y;
    
    //lamda function
    auto ok=[&](int mid)
    {
        if(mid < min(x,y))
            return false;
        
        int cnt=1;
        mid -= min(x,y);
        cnt += (mid/x) + (mid/y);

        return cnt>=n;
    };

    int l=1, r=max(x,y)*n, ans;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r=mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<'\n';
    return 0;
}