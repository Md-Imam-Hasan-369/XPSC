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
    ll t; cin>>t;
    while(t--)
    {
        ll n; cin>>n;
        string s; cin>>s;

        vector<ll> dif; // (R-L) or (L-R)
        ll cnt=0;//minimum koyta change hocche ta count 
        ll sum=0;
        for(ll i=0;i<n;i++)
        {
            ll L=i;
            ll R=n-i-1;
            if(s[i]=='L')
            {
                if(R>L) //that means change hocche
                {
                    cnt++;
                    sum += R;
                    dif.push_back(R-L);
                }
                else sum += L;
            }
            else
            {
                if(L>R)
                {
                    cnt++;
                    sum += L;
                    dif.push_back(L-R);
                }
                else sum += R;
            }
        }
        vector<ll> ans(n+1);
        for(ll i=cnt;i<=n;i++)
        {
            ans[i] = sum;
        }
        //sort in descending order
        sort(dif.begin(),dif.end(),greater<ll>());
        for(ll i=cnt-1;i>=1;i--)
        {
            sum -= dif.back();
            ans[i] = sum;
            dif.pop_back();
        }

        for(ll i=1;i<=n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}