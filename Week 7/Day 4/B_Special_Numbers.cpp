#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

ll power(ll base,ll n)
{
    ll result =1;
    while(n)
    {
        if(n%2==1)
        {
            result = (result*base)%mod;
            n--;
        }
        else
        {
            base = (base*base)%mod;
            n/=2;
        }
    }
    return result%mod;
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        while(k!=0)
        {
            if(k&1 !=0)
                s += "1";
            else s+="0";;
            k = k>>1;
        }
        // for(auto c:s) cout<<c<<" ";
        ll sum =0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                sum += power(n,i);
                sum = sum%mod;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}