#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n, a,b;
    cin>>n>>a>>b;
    int l=1, r=min(a,b), ans;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(a/mid+b/mid >= n)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<'\n';
    return 0;
}