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

        int mn = INT_MAX;
        for(int i=0;i<n;i++)
        {
            int cur = 0;
            //check left neighbor: i-1
            if(i>0)
                cur = max(cur, abs(ar[i]-ar[i-1]));
            //check right neighbor: i+1
            if(i<n-1)
                cur = max(cur, abs(ar[i]-ar[i+1]));
            mn = min(mn,cur);
        }
        cout<<mn<<'\n';
    }
    return 0;
}