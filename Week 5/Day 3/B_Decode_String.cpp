#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

char intToAlphabet(int digit)
{
    return static_cast<char>('a'-1 + digit);
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        string ans;
        for(int i=n-1;i>=0; )
        {
            if(s[i] != '0')
            {
                ans += intToAlphabet(s[i]-'0');
                i--;
            }
            else
            {
                ans += intToAlphabet(stoi(s.substr(i-2,2)));
                i -=3;
            }
        }
        reverse(ans.begin(),ans.end());
        cout<<ans<<'\n';
    }
    return 0;
}