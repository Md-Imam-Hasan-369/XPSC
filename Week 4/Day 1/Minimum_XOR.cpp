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
        int XOR=0;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            XOR ^= ar[i];
        }
        int ans = XOR;
        for(int i=0;i<n;i++)
        {
            ans = min(ans, (XOR ^ ar[i]));
        }
        cout<<ans<<endl;
    }
    return 0;
}