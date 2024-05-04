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
    string st; cin>>st;
    ll nb,ns,nc;
    cin>>nb>>ns>>nc;
    ll pb,ps,pc;
    cin>>pb>>ps>>pc;
    ll total_tk;
    cin>>total_tk;

    ll b=0,s=0,c=0;
    for(int i=0;i<st.size();i++)
    {
        if(st[i]=='B') b++;
        else if(st[i]=='S') s++;
        else c++;
    }

    //binary search on answer
    ll l=0,r=1e15, ans;
    while(l<=r)
    {
        ll mid = l+(r-l)/2;
        ll x = max(0ll, b*mid-nb);
        ll y = max(0ll, s*mid-ns);
        ll z = max(0ll, c*mid-nc);

        ll cost = pb*x + ps*y + pc*z;
        if(cost <= total_tk)
        {
            ans = mid;
            l = mid+1;
        }
        else r = mid-1;
    }
    cout<<ans<<'\n';
    return 0;
}