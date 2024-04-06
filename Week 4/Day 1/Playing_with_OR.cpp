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
        int n, k;
        cin>>n>>k;
        vector<int> ar(n);
        for(int i=0;i<n;i++) cin>>ar[i];
        
        //first window odd count
        int odd=0;
        for(int i=0;i<k;i++)
            if(ar[i]%2==1) odd++;
        
        int ans=0;
        if(odd>0) ans++;

        //sliding window technique
        int i=k;
        while(i<n)
        {
            if(ar[i-k]%2==1) //contribution remove
                odd--;
            if(ar[i]%2==1)
                odd++;
            if(odd>0) ans++;

            i++;
        }
        cout<<ans<<'\n';
    }
    return 0;
}