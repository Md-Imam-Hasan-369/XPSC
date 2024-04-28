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
    int t; cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll need = (k-1) / (n-1);
        cout<<(k+need)<<'\n';
    }
    return 0;
}