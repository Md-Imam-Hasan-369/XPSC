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
    vector<string> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    reverse(v.begin(),v.end());
    set<string>my_set;
    string ans;
    for(auto w:v)
    {
        //check the word exist in the set or not
        auto it = my_set.find(w);
        if(it == my_set.end())
        {
            my_set.insert(w);
            int sz = w.size();
            if(sz>=2)
            {
                ans += w[sz-2];
                ans += w[sz-1];
            }
        }
    }
    cout<<ans<<"\n";
    return 0;
}