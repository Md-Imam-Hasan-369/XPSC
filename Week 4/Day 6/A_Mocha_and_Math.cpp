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
        long long ans=-1;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            ans &= ar[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}