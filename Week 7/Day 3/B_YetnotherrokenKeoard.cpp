#include<bits/stdc++.h>
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
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
        string ans;
        int small=0, capital=0;
        for(int i=s.size()-1; i>=0; --i)
        {
            char c=s[i];
            if(islower(c))
            {
                if(c=='b')
                    small++;
                else if(small)
                    small--;
                else
                    ans+=c;
            }
            else
            {
                if(c=='B')
                    capital++;
                else if(capital)
                    capital--;
                else
                    ans+=c;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}