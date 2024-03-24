#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
int find_mn(string &a,string &b)
{
    int val=0;
    for(int i=0;i<a.size();i++)
    {
        val += abs(a[i]-b[i]);
    }
    return val;
}
int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<string> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        int mn=INT_MAX;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int x = find_mn(v[i],v[j]);
                mn = min(mn,x);
            }
        }
        cout<<mn<<"\n";
        
    }
    return 0;
}
/*
char a='b',b='a';
int x=a-b;
cout<<x;
*/