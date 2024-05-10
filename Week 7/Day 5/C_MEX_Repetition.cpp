#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
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
        int n,k;
        cin>>n>>k;
        ll t_sum = n*(n+1)/2;
        ll cur_sum=0;
        vector<ll> v;
        for(int i=0;i<n;i++)
        {
            int x; cin>>x;
            v.push_back(x);
            cur_sum += x;
        }
        v.push_back(t_sum-cur_sum);
        k = k%(n+1);

        for(int i=0;i<n;i++)
        {
            cout<<v[(i-k+n+1)%(n+1)]<<" ";
        }
        cout<<endl;
    }
    return 0;
}