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
        int n; cin>>n;
        queue<int> q;
        for(int i=1;i<=n;i++)
        {
            int x; cin>>x;
            q.push(x);
        }
        long long ans=0;
        priority_queue<int>pq;
        while(!q.empty())
        {
            int val=q.front();
            if(val>0)
            {
                pq.push(val);
            }
            else
            {
                if(!pq.empty())
                {
                    ans += pq.top();
                    pq.pop();
                }
            }
            q.pop();
        }
        cout<<ans<<"\n";
    }
    return 0;
}