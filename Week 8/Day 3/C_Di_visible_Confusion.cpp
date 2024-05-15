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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n+3);
        for(int i=1;i<=n;i++) cin>>ar[i];

        bool ok=false;
        for(int i=1;i<=n;i++)
        {
            bool flag=false;
            for(int j=2;j<=i+1;j++)
            {
                if(ar[i]%j != 0)
                {
                    flag=true;
                    break;
                }
            }
            if(!flag)
            {
                ok=true;
                break;
            }
        }
        if(!ok) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}