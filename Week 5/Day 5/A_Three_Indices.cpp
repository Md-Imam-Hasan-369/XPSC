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
        vector<int> ar(n+1);
        for(int i=1;i<=n;i++) cin>>ar[i];

        int cnt=0, pi=0,pj=0,pk=0;
        for(int i=2;i<n;i++)
        {
            if(ar[i-1]<ar[i] && ar[i]>ar[i+1])
            {
                cnt++;
                pi=i-1;
                pj=i, pk=i+1;
            }
        }

        if(cnt!=0)
        {
            cout<<"YES"<<'\n';
            cout<<pi<<" "<<pj<<" "<<pk<<'\n';
        }
        else cout<<"NO"<<'\n';
    }
    return 0;
}