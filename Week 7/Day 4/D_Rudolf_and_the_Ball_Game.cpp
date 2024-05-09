#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
void solve()
{
   ll n,m,x;
   cin>>n>>m>>x;
   set<ll>ans;
   ans.insert(x);
   while(m--)
   {
        ll d;
        char c;
        cin>>d>>c;
        set<ll>tmp;
        if(c=='0')
        {
            for(ll z:ans)
            {
                ll ck = z+d;
                if(ck%n==0)
                    tmp.insert(n);
                else tmp.insert(ck%n);
            }
        }
        else if(c=='1')
        {
            for(ll z:ans)
            {
                ll ck = z+n-d;
                if(ck%n==0)
                    tmp.insert(n);
                else tmp.insert(ck%n);
            }
        }
        else
        {
            for(ll z:ans)
            {
                ll cnk = z+n-d;
                if(cnk%n==0)
                    tmp.insert(n);
                else tmp.insert(cnk%n);

                ll ck=z+d;
                if(ck%n ==0)
                    tmp.insert(n);
                else tmp.insert(ck%n);
            }
        }
        ans = tmp;
   }

   cout<<ans.size()<<'\n';
   for(ll z:ans) cout<<z<<" ";
   cout<<'\n';
}

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}