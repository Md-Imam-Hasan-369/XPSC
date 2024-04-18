#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int x = log2(n-1);
        // cout<<x<<endl;
        x = pow(2,x);
        for(int i=x-1;i>=0;i--) cout<<i<<" ";
        for(int i=x;i<n;i++) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}