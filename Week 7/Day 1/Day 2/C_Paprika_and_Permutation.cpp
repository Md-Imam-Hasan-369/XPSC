#include<bits/stdc++.h>
#define ll long long
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
        int n; cin>>n;
        set<int> s;
        for(int i=1;i<=n;i++) s.insert(i);
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int val; cin>>val;
            if(s.find(val) != s.end())
                s.erase(val);
            else v.push_back(val);
        }

        sort(v.rbegin(),v.rend());
        bool ok=true;
        for(auto val:v)
        {
            auto it = s.end();
            it--;
            int need = *it;
            if(need>(val-1)/2)
            {
                ok=false;
                break;
            }
            s.erase(it);
        }
        if(ok) cout<<v.size()<<'\n';
        else cout<<-1<<'\n';
    }
    return 0;
}