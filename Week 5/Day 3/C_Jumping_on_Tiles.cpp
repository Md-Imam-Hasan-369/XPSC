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
        string s; cin>>s;
        int n=s.size();
        char mn = min(s[0],s[n-1]);
        char mx = max(s[0],s[n-1]);

        string s2;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            if(s[i] >= mn && s[i] <= mx)
            {
                v.push_back(i+1);
                s2.push_back(s[i]);
            }
        }

        sort(s2.begin(),s2.end());
        int n2=s2.size();
        int l_digit = s2[n2-1]-'a';
        long long min_cost=0;
        for(int i=n-2;i>=0;i--)
        {
            int cur_digit = s2[i]-'a';
            long long cost = l_digit - cur_digit;
            min_cost += cost;
            l_digit = cur_digit;
        }
        cout<<min_cost<<" "<<n2<<'\n';
        for(int val:v) cout<<val<<" ";
        cout<<'\n';
    }
    return 0;
}