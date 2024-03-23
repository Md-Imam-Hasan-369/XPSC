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
        int t=0,i=0,m=0,u=0,r=0;
        for(char c:s)
        {
            if(c=='T') t++;
            else if(c=='i') i++;
            else if(c=='m') m++;
            else if(c=='u') u++;
            else if(c=='r') r++;
        }

        if(n==5 && t==1 && i==1 && m==1 && u==1 && r==1) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}