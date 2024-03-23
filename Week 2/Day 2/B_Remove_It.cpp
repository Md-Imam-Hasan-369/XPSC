#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,x;
    cin>>n>>x;
    vector<int> ar;
    for(int i=0;i<n;i++)
    {
        int m;cin>>m;
        if(m!=x)
        {
            ar.push_back(m);
        }
    }

    if(!ar.empty())
    {
        for(int val:ar) cout<<val<<" ";
    }
    return 0;
}