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

    vector<int> ans;
    int i=0,j=0;
    int k=0;//k indicate ans array index
    while(i<n && j<m)
    {
        if(a[i] < b[j])
        {
            ans.push_back(a[i]);
            i++;
            k++;
        }
        else
        {
            ans.push_back(b[j]);
            j++;
            k++;
        }
    }

    while(i<n)
    {
        ans.push_back(a[i]);
        i++;
        k++;
    }
    while(j<m)
    {
        ans.push_back(b[j]);
        j++;
        k++;
    }

    for(int val:ans) cout<<val<<" ";
    return 0;
}