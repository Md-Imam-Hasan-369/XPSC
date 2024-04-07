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
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            ans |= x;
        }
        cout<<ans<<'\n';
    }
    return 0;
}