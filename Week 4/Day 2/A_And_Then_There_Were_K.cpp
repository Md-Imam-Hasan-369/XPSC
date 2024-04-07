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
        int k = log2(n);
        int ans = pow(2,k);
        cout<<ans-1<<endl;
    }
    return 0;
}