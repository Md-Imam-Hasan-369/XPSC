#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
string convert(string move)
{
    for(char &c:move)
    {
        if(c=='U') c='D';
        else c='U';
    }
    return move;
}
int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];

        vector<int> v2;
        vector<string>s;
        for(int i=0;i<n;i++)
        {
            int x;
            string y;
            cin>>x>>y;
            // Invert the move string
            y = convert(y);
            v2.push_back(x);
            s.push_back(y);
        }
        
        int k=0;
        for(auto word:s)
        {
            for(int i=0;i<word.size();i++)
            {
                if(word[i]=='U')
                {
                    if(v[k]==9)
                    {
                        v[k]=0;
                    }
                    else
                    {
                        v[k] = v[k]+1;
                    }
                }
                else
                {
                    if(v[k]==0)
                    {
                        v[k]=9;
                    }
                    else
                    {
                        v[k] = v[k]-1;
                    }
                }
            }
            k++;
        }
        for(int val:v) cout<<val<<" ";
        cout<<"\n";
    }
    return 0;
}