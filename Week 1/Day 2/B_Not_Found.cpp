#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    string s;
    cin>>s;
    int freq[26]={0};
    for(int i=0;i<s.size();i++)
    {
        int val = s[i]-'a';
        freq[val]++;
    }
    string missing;
    for(int i=0;i<26;i++)
    {
        if(freq[i]==0)
        {
            missing = i+'a';
            break;
        }
    }
    if(missing.empty())cout<<"None"<<"\n";
    else cout<<missing<<"\n";
    return 0;
}