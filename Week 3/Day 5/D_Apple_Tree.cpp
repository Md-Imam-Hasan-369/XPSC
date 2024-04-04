#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

const int N = 1e6;
vector<int> adj[N];
vector<int> leaf_cnt;

void dfs(int s,int par)//2 1
{
    bool flag=false;
    for(auto child:adj[s])
    {
        if(child != par)
        {
            flag = true;
            dfs(child,s);
            leaf_cnt[s] += leaf_cnt[child];
        }
    }
    if(!flag)
    {
        leaf_cnt[s] = 1;
    }
}
void dfs(int s,int par)//1 -1
{
    bool flag=false;
    for(auto child:adj[s])
    {
        if(child != par)
        {
            flag = true;
            dfs(child,s);
            leaf_cnt[s] += leaf_cnt[child];
        }
    }
    if(!flag)
    {
        leaf_cnt[s] = 1;
    }
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        for(int i=0;i<=n;i++)
            adj[i].clear();//reset adj
        
        leaf_cnt.assign(n+1,0);//Initialize size
        for(int i=1;i<=n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,-1);

        int q; cin>>q;
        while(q--)
        {
            int x,y;
            cin>>x>>y;
            int ans = leaf_cnt[x] * leaf_cnt[y];
            cout<<ans<<"\n";
        }
    }
    return 0;
}