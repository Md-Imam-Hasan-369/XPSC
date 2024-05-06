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
        string s; cin>>s;
        stack<char> st;
        int cnt=0;
        for(char c:s)
        {
            if(!st.empty() && st.top()!=c)
                st.pop(), cnt++;
            else st.push(c);
        }
        // cout<<cnt<<endl;
        if(cnt%2==0) cout<<"Ramos"<<'\n';
        else cout<<"Zlatan"<<'\n';
    }
    return 0;
}