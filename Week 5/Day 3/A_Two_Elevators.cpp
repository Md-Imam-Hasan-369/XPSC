#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int tc; cin>>tc;
    while(tc--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll d1 = abs(a-1);
        ll d2 = abs(b-c) + abs(c-1);
        if(d1<d2) cout<<1<<'\n';
        else if(d1>d2) cout<<2<<'\n';
        else cout<<3<<'\n';
    }
    return 0;
}