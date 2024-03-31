#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        for(char& c:s)
        {
            c=tolower(c);
        }
        s.erase(unique(s.begin(),s.end()),s.end());
        
        if(s=="meow") cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}