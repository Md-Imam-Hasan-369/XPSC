#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;
        sort(ar.begin(),ar.end(),greater<int>());
        
        for(int val:ar) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}