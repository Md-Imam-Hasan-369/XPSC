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
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar.begin(),ar.end());

    int k; cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        auto it_l = lower_bound(ar.begin(),ar.end(),l);
        auto it_r = upper_bound(ar.begin(),ar.end(),r);
        
        cout<<it_r - it_l<<" ";
    }
    return 0;
}
