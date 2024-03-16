#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n,m;
    cin>>n>>m;
    vector<int> a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];

    int l=0,r=0,cnt=0;
    while(r<m)
    {
        while(a[l] < b[r] && l<n)
        {
            cnt++;
            l++;
        }
        cout<<cnt<<" ";
        r++;
    }
    return 0;
}