#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;

        stack<char>st;
        for(char c:s)
        {
            if(c=='(')
            {
                st.push(c);
            }
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
        cout<<st.size()<<"\n";
    }
    return 0;
}