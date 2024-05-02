#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    string t; cin>>t;
    string p; cin>>p;
    int n = t.size(), m=p.size();
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    //lamda function
    auto ok = [&](int mid)
    {
        vector<bool> bad(n+1);
        for(int i=0;i<mid;i++)
        {
            bad[ar[i]]=true;
        }
        
        int j=0;
        bool found=false;
        for(int i=0;i<n;i++)
        {
            if(p[j]==t[i] && !bad[i+1])
            {
                j++;
            }
            if(j==m)
            {
                found=true;
                break;
            }
        }
        return found;
    };
    //Binary Search on answer
    int l=0,r=n,ans=0;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    cout<<ans<<'\n';
    return 0;
}