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
    ll n,x;
    cin>>n>>x;
    vector<pair<ll,int>> ar(n);
    for(int i=0;i<n;i++)
    {
        cin>>ar[i].first;
        ar[i].second = i+1;
    }

    sort(ar.begin(),ar.end());
    int a,b,c;
    a=b=c=-1;
    bool ok=false;
    for(int i=0;i<n;i++)
    {
        int l=i+1, r=n-1;
        while(l<r)
        {
            ll cur = ar[i].first+ar[l].first+ar[r].first;
            if(cur==x)
            {
                a=ar[i].second;
                b=ar[l].second;
                c=ar[r].second;
                ok=true;
                break;
            }
            else if(cur<x)
                l++;
            else r--;
        }
        if(ok)break;
    }
    if(a!=-1 && b!=-1 && c!=-1)
        cout<<a<<" "<<b<<" "<<c<<'\n';
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}