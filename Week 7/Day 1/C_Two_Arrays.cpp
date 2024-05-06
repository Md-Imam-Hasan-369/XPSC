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
        vector<int> a(n),b(n);
        for(int &i:a) cin>>i;
        for(int &i:b) cin>>i;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        bool ok=true;
        for(int i=0;i<n;i++)
        {
            if(a[i]+1 < b[i] or a[i]>b[i])
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