#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int m,n;
    cin>>m>>n;
    vector<tuple<int,int,int>> ar(n);
    for(int i=0;i<n;i++)
    {
        int t,z,y;
        cin>>t>>z>>y;
        ar[i] = make_tuple(t,z,y);
    }

    //lamda function (greedy part)
    vector<int> can(n);
    auto ok = [&](int mid)
    {
        vector<int> may(n);
        int has=m;
        for(int i=0;i<n;i++)
        {
            tuple<int,int,int> T = ar[i];
            int t = get<0>(T);
            int z = get<1>(T);
            int y = get<2>(T);
            int total = (t*z)+y;
            int can = mid/total;
            int remaning = mid%total;
            int curr = (can*z) + min(z,(remaning/t));
            curr = min(has,curr);
            has -= curr;
            may[i]=curr;
        }

        if(!has)
        {
            for(int i=0;i<n;i++)
            {
                can[i] = may[i];
            }
        }

        return (!has);
    };

    //binary search part
    int l=0, r=1e8, ans;
    while(l<=r)
    {
        int mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans=mid;
            r = mid-1;
        }
        else l = mid+1;
    }

    cout<<ans<<'\n';
    for(int val:can)
        cout<<val<<" ";
    cout<<'\n';
    return 0;
}