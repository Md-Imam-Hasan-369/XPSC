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
        int n,b;
        cin>>n>>b;
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];

        int ans=-1;
        for(int i=0;i<n;i++)
        {
            if((ar[i]&b)==b)
            {
                ans &= ar[i];
            }
        }

        if(ans==b) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}