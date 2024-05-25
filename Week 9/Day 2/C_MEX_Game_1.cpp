#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

// Speed optimizations
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> freq(n+1);
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            if(x<=n) freq[x]++;
        }

        //Find MEX
        int cnt=0;
        for(int i=0;i<=n;i++)
        {
            if(freq[i]==1)
                cnt++;
            
            if(cnt==2 || freq[i]==0)
            {
                cout<<i<<'\n';
                break;
            }
        }
    }
    return 0;
}
