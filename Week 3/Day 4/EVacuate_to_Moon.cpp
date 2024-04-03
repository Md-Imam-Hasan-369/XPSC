#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false)
#define By cin.tie(NULL)
#define Imam cout.tie(NULL)

int main()
{
    Code; By; Imam;
    int t; cin>>t;
    while(t--)
    {
        ll n,m,h;
        cin>>n>>m>>h;
        vector<ll> a(n),b(m);
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < m; i++) cin >> b[i];

        //sorting in descending order
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());

        ll sum=0;
        for(int i=0;i<min(n,m);i++)
        {
            sum += min(a[i], b[i]*h);
        }
        cout<<sum<<"\n";
    }
    return 0;
}
