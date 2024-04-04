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
        map<int,multiset<int>> mp;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            mp[x].insert(i);//value hisebe multiset er modde index rakhtechi. multiset er jaigai vector o use kora jabe
        }
        while(q--)
        {
            int a,b;
            cin>>a>>b;
            int sz1 = mp[a].size();
            int sz2 = mp[b].size();
            if(sz1==0 or sz2==0)
                cout<<"NO"<<'\n';
            else
            {
                int first_idx = *mp[a].begin();//first theke index ta khujo
                int last_idx = *mp[b].rbegin();//last theke index ta khujo
                if(first_idx < last_idx)
                    cout<<"YES"<<'\n';
                else 
                    cout<<"NO"<<'\n';
                // cout<<first_idx<<" "<<last_idx<<endl;
            }
        }
    }
    return 0;
}