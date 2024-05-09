#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
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
        string s; cin>>s;
        int one=0,zero=0;
        for(char c:s)
        {
            if(c=='1') one++;
            else zero++;
        }

        for(char c:s)
        {
            if(c=='1')
            {
                if(zero) zero--;
                else break;
            }
            else
            {
                if(one) one--;
                else break;
            }
        }

        int ans = one+zero;
        cout<<ans<<endl;
    }
    return 0;
}