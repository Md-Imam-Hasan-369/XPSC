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
        vector<int> a(n), b(n);
        for(int &i:a) cin>>i;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
            mx = max(mx,a[i]-b[i]);
        }

        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]-mx < b[i] && b[i]!=0)
            {
                ok=false;
                break;
            }
        }
        if(ok) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}