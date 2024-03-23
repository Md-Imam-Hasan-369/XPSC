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
        int a,b,c;
        cin>>a>>b>>c;
        bool flag=false;
        if(a+b==c)
        {
            flag = true;
        }
        
        if(flag) cout<<"+"<<"\n";
        else cout<<"-"<<"\n";
    }
    return 0;
}