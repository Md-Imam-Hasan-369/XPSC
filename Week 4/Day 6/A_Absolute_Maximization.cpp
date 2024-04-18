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
        for(int i=0;i<n;i++) cin>>ar[i];
        int max_val=ar[0];
        int min_val=ar[0];
        for(int i=1;i<n;i++)
        {
            max_val |=ar[i];
            min_val &=ar[i];
        }

        int ans = max_val-min_val;
        cout<<ans<<endl;
    }
    return 0;
}