#include<bits/stdc++.h>
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
        int n,q;
        cin>>n>>q;
        vector<int> ar(n);
        for(auto &i:ar)
            cin>>i;
        sort(ar.begin(),ar.end(),greater<int>());
        //prefix sum
        vector<int> pref(n);
        pref[0] = ar[0];
        for(int i=1;i<n;i++)
        {
            pref[i] = ar[i] + pref[i-1];
        }
        //queries
        while(q--)
        {
            int target;
            cin>>target;
            auto it = lower_bound(pref.begin(),pref.end(),target);

            if(it==pref.end())
                cout<<-1<<'\n';
            else 
                cout<<(it - pref.begin())+1<<'\n'; // plus 1 hocche index er karone
        }
    }
    return 0;
}