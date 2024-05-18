#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
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
        map<int,int> idx;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            idx[ar[i]] = i+1; // store 1 based index
        }

        int mx_sum=-1;
        for(auto it1:idx)
        {
            for(auto it2:idx)
            {
                if(gcd(it1.first, it2.first)==1)
                {
                    int sum_idx = it1.second+it2.second;
                    mx_sum = max(mx_sum, sum_idx);
                }
            }
        }
        cout<<mx_sum<<'\n';
    }
    return 0;
}