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
        multiset<int> ml;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            ml.insert(x);
        }
        int ans=0;
        while(!ml.empty())
        {
            int curr = *ml.begin();
            while(true)
            {
                auto nxt = ml.find(curr+1);
                if(nxt == ml.end())
                {
                    ml.erase(ml.find(curr));
                    ans++;
                    break;
                }
                ml.erase(ml.find(curr));
                curr++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
