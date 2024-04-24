#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int tc; cin>>tc;
    while(tc--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        //Count number of set bit for each element
        vector<int> bit_cnt(32);
        
        for(int k=0;k<=31;k++)
        {
            for(int i=0;i<n;i++)
            {
                if((ar[i]>>k)&1 != 0)
                {
                    bit_cnt[k]++;
                }
            }
        }
        // for(int v:bit_cnt) cout<<v<<" ";
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            bool flag=true;
            for(int k=0;k<=31;k++)
            {
                if(bit_cnt[k]%i != 0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                ans.push_back(i);
        }

        for(int val:ans) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}