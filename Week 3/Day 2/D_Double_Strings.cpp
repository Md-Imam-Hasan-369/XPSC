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
        vector<string>s(n);
        map<string,int>freq;
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
            freq[s[i]]++;
        }
        
        string ans(n,'0');
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<s[i].size()-1;j++)
            {
                string x="",y="";
                
                for(int k=0;k<=j;k++)
                {
                    x +=s[i][k];
                }
                for(int k=j+1;k<s[i].size();k++)
                {
                    y +=s[i][k];
                }

                if(x==y)
                {
                    if(freq[x]>0)
                    {   
                        ans[i]='1';
                        break;
                    }
                }
                else
                {
                    if(freq[x] > 0 && freq[y] > 0) 
                    {
                        ans[i]='1';
                        break;
                    }
                }

                if(ans[i]=='1') break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}