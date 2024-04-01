#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar[n];
        map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                int x;cin>>x;
                ar[i].push_back(x);

                if(ar[i].size()==(n-1))
                {
                    mp[ar[i][n-2]]++;
                }
            }
        }
        
        int cnt=INT_MIN;
        int mx_appear;
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second > cnt)
            {
                cnt = it->second;
                mx_appear = it->first;
            }
        }

        vector<int>v;
        for(int i=0;i<n;i++)
        {
            for(int j=n-2;j>=0;j--)
            {
                int val=ar[i][j];
                if(val!=mx_appear)
                {
                    v.push_back(val);
                }
                else break;
            }
            if(!v.empty()) break;
        }
        
        int sz=v.size();
        for(int i=sz-1;i>=0;i--) cout<<v[i]<<" ";
        cout<<mx_appear<<"\n";
    }
    return 0;
}