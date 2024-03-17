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
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int mx_val=0;//4
        int op=0;//1
        for(int i=0;i<n;i++)
        {
            mx_val = max(mx_val,v[i]);
            op = max(op,mx_val-i-1);//4-2-1=1
        }
        cout<<op<<"\n";
    }
    return 0;
}