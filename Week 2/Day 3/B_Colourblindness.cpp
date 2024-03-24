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
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<n;i++)
        {
            if(s1[i]=='B')
            {
                s1[i] = 'G';
            }
            if(s2[i]=='B')
            {
                s2[i] = 'G';
            }
        }

        if(s1==s2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}