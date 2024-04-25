#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n; cin>>n;
        int m = n*(n-1)/2;
        vector<int> ar(m);
        for(int &i:ar) cin>>i;
        sort(ar.begin(),ar.end());

        for(int i=0;i<m;i+=--n)
        {
            cout<<ar[i]<<" ";
        }
        cout<<1000000000<<endl;
    }
}