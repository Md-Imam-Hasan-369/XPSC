#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

const int maxN = 1e4;
vector<ll> pw;

int main()
{
    Code By Imam
    for(int i=1;i<=maxN;i++)
    {
        pw.push_back(pow(i,3));
    }

    int t; cin>>t;
    while(t--)
    {
        ll x; cin>>x;
        bool flag=false;
        for(int i=1;i<=maxN;i++)
        {
            ll target = x - pow(i,3);
            ll l=0,r=maxN-1;
            while(l<=r)
            {
                ll mid = (l+r)/2;
                if(pw[mid]==target)
                {
                    flag=true;
                    break;
                }
                else if(target < pw[mid])
                {
                    r = mid-1;
                }
                else
                {
                    l = mid+1;
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}