#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    string s,t;
    cin>>s>>t;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i] != t[i])
        {
            cnt++;
            s[i] = t[i];
        }
    }
    cout<<cnt<<"\n";
    return 0;
}