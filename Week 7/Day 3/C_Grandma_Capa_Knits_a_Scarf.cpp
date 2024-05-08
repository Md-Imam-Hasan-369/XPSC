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
        string s; cin>>s; //abcaacab

        set<char> st;//abc
        for(int i=0;i<n;i++) st.insert(s[i]);
        int ans=INT_MAX;
        for(char c:st)
        {
            int i=0,j=n-1;
            int cnt=0;
            while(i<j)
            {
                if(s[i]==s[j])
                    i++,j--;
                else
                {
                    if(s[i]==c)
                        i++,cnt++;
                    else if(s[j]==c)
                        j--,cnt++;
                    else 
                    {
                        cnt=INT_MAX;
                        break;
                    }
                }
            }
            ans = min(ans,cnt);
        }
        if(ans==INT_MAX) cout<<-1<<'\n';
        else cout<<ans<<'\n';
    }
    return 0;
}