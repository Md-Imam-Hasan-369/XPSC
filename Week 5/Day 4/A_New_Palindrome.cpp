#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

bool all_char_same(string& s)
{
    char fst = s[0];
    for(char ch:s)
    {
        if(fst!=ch)
            return false;
    }
    return true;
}
int main()
{
    Code By Imam
    int tc; cin>>tc;
    while(tc--)
    {
        string s; cin>>s;
        int n=s.size();
        if(n%2!=0)
        {
            s.erase(s.begin() + n/2);
        }
        
        if(all_char_same(s))
            cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
    }
    return 0;
}