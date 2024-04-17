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
    
    ll t; cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        priority_queue<ll> pq;
        for(ll i=0;i<n;i++)
        {
            ll x; cin>>x;
            pq.push(x);
        }

        vector<stack<ll>>v;
        while(!pq.empty())
        {
            ll tp = pq.top();
            pq.pop();
            if(v.empty())
            {
                stack<ll> new_stack;
                new_stack.push(tp);
                v.push_back(new_stack);
            }
            else
            {
                //check the top of the last stack in v
                ll st = v.back().top();
                if(st >= tp)
                {
                    ll box = st^tp;
                    v.back().push(box);
                }
                else
                {
                    // create a new stack and push the current element
                    stack<ll> new_stack;
                    new_stack.push(tp);
                    v.push_back(new_stack);
                }
            }
        }
        
        cout<<v.size()<<endl;
    }
    return 0;
}