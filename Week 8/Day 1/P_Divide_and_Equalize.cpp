#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Solved using prime factorization

int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;
        
        map<int,int>cnt;
        for(int i=0;i<n;i++)
        {
            for(int j=2;j*j<=ar[i];j++)
            {
                if(ar[i]%j==0)
                {
                    while(ar[i]%j==0)
                    {
                        cnt[j]++;
                        ar[i] /=j;
                    }
                }
            }
            if(ar[i]>1)
                cnt[ar[i]]++;
        }

        bool ok=true;
        for(auto it:cnt)
        {
            int ss = it.second;
            if(ss%n!=0)
            {
                ok=false;
                break;
            }
        }
        
        if(ok)cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}