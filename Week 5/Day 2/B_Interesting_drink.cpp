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
    for(auto &i:ar) 
        cin>>i;
    sort(ar.begin(),ar.end());

    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        
        auto it = upper_bound(ar.begin(),ar.end(),x);
        int idx = it-ar.begin();
        cout<<idx<<'\n';
    }
    return 0;
}