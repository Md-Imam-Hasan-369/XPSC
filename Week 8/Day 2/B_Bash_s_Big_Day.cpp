#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n; cin>>n;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;

    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {
        for(int j=2;j*j<=ar[i];j++)
        {
            if(ar[i]%j==0)
            {
                cnt[j]++;
                while(ar[i]%j==0)
                {
                    // cnt[j]++;
                    ar[i] /=j;
                }
            }
        }
        if(ar[i]>1)
            cnt[ar[i]]++;
    }
    
    int ans=1;
    for(auto it:cnt)
    {
        ans = max(ans, it.second);
    }
    cout<<ans;
    return 0;
}