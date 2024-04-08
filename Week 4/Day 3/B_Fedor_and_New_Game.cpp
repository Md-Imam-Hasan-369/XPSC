#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> ar(m+1);
    for(int i=0;i<=m;i++) cin>>ar[i];

    vector<vector<int>> all_mask;
    for(int i=0;i<=m;i++)
    {
        vector<int>v;
        for(int j=0;j<n;j++)
        {
            if((ar[i]>>j)&1 !=0)
                v.push_back(1);
            else
                v.push_back(0);
        }
        all_mask.push_back(v);
    }

    int ans=0;
    vector<int> fedor = all_mask[m];
    for(int i=0;i<all_mask.size()-1;i++)
    {
        vector<int> v = all_mask[i];
        int cnt=0;
        for(int j=0;j<n;j++)
        {
            if(fedor[j] != v[j])
                cnt++;
        }
        if(cnt <= k)
            ans++;
    }

    cout<<ans<<endl;
    return 0;
}