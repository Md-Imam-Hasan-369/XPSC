#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t ;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }

        reverse(ar.begin(),ar.end());
        set<int>s;
        int cnt=0;
        for(int v:ar)
        {
            s.insert(v);
            cnt++;
            if(cnt != s.size()) break;
        }
        
        cout<<n-s.size()<<"\n";
    }
    return 0;
}