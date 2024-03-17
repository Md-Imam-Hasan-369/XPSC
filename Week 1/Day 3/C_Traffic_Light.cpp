#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
int min_time(string s,char c)
{
    string ss = s+s;//I take double string to address the cyclicity of the traffic light sequence
    int index=-1;//last green index
    int ans=0;
    for(int i=ss.size()-1;i>=0;i--)
    {
        if(ss[i]=='g')
        {
            index = i;// Update last green index
        }
        else if(ss[i]==c)
        {
            ans = max(ans,index-i);// Update the minimal waiting time
        }
    }
    return ans;
}
int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n;
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int wt = min_time(s,c);
        cout<<wt<<"\n";
    }
    return 0;
}