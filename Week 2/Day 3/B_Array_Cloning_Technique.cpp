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
        int n;cin>>n;
        map<int,int>freq;
        for(int i=0;i<n;i++)
        {
            int x;cin>>x;
            freq[x]++;
        }

        int mx_freq=0;
        for(auto val:freq)
            mx_freq = max(mx_freq,val.second);

        int ans=0;
        while(mx_freq<n)
        {
            int rem = n-mx_freq;
            int can_add = mx_freq;
            ans++;//jehetu clone korechi
            ans += min(can_add,rem);
            mx_freq += min(can_add,rem);
        }
        cout<<ans<<endl;
    }
    return 0;
}