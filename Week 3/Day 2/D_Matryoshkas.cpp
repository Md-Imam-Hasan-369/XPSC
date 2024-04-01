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
        vector<int> ar(n);
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            mp[ar[i]]++;
        }

        sort(ar.begin(),ar.end());
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(mp[ar[i]]!=0)
            {
                ans++;
                while(mp[ar[i]] > 0)
                {
                    mp[ar[i]]--;
                    ar[i]++;
                }
            }
        }
        // for(auto it=mp.begin();it!=mp.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        cout<<ans<<"\n";
    }
    return 0;
}
//it's possible to solve using multiset