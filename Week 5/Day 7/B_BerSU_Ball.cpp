#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n; cin>>n;
    vector<int> boys(n);
    for(int &i:boys) cin>>i;
    int m; cin>>m;
    vector<int> girls(m);
    for(int &i:girls) cin>>i;
    
    sort(boys.begin(),boys.end());
    sort(girls.begin(),girls.end());
    int i=0,j=0,ans=0;

    while(i<n && j<m)
    {
        if(abs(boys[i]-girls[j]) <= 1)
        {
            ans++;
            i++,j++;
        }
        else if(boys[i] < girls[j]) i++;
        else j++;
    }
    cout<<ans<<'\n';
    return 0;
}