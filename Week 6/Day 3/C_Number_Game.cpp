#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        multiset<int> s;
        multiset<int> s2;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            s.insert(x);
            s2.insert(x);
        }
        
        //lamda function
        auto ok = [&](int k)
        {
            for(int i=1;i<=k;i++)
            {
                if(s.empty()) return false;
                int need = k-i+1;
                auto it = s.upper_bound(need);
                if(it==s.begin()) return false;
                it--;
                s.erase(it);

                if(!s.empty())
                {
                    auto it2 = s.begin();
                    int val = *it2;
                    val+=need;
                    s.insert(val);
                    s.erase(it2);
                }
            }
            return true;
        };
        int l=0, r=n, ans;
        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(ok(mid))
            {
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
            s=s2;//update s
        }
        cout<<ans<<'\n';
    }
    return 0;
}