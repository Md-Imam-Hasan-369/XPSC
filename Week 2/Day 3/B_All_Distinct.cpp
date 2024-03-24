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
        set<int> s;
        for(int i=1;i<=n;i++)
        {
            int x;cin>>x;
            s.insert(x);
        }
        int sz=s.size();
        if((n-sz)%2==0) cout<<sz<<"\n";
        else cout<<sz-1<<"\n";
    }
    return 0;
}

/*
1
7
5 2 7 3 4 8 6
ans=7
*/