#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n;
    cin>>n;
    vector<int> v(n);
    long long sum=0;
    int min_odd = INT_MAX;

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        sum += v[i];

        if(v[i]%2!=0 && v[i]<min_odd)
        {
            min_odd = v[i];
        }
    }
    
    if(sum%2!=0)
    {
        sum -= min_odd;
    }
    cout<<sum<<"\n";
    return 0;
}