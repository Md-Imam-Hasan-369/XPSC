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
    for(auto &i:ar) cin>>i;
    //prefix sum
    vector<int> pref(n);
    pref[0] = ar[0];
    for(int i=1;i<n;i++)
    {
        pref[i] = ar[i] + pref[i-1];
    }

    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        auto it = lower_bound(pref.begin(),pref.end(),x);

        cout<<(it - pref.begin())+1<<'\n';
    }
    return 0;
}