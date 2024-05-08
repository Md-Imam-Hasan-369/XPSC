#include<bits/stdc++.h>
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
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
        vector<int> freq(n+1);
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            if(x<=n) freq[x]++;
        }
        
        vector<int> mx(n+1);
        for(int i=1;i<=n;i++)
        {
            for(int j=i;j<=n;j+=i)
            {
                mx[j] +=freq[i];
            }
        }

        int ans = *max_element(mx.begin(),mx.end());
        cout<<ans<<'\n';
    }
    return 0;
}