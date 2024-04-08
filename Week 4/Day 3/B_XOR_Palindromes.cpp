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
        int goodPair=0;
        int not_good=0;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
                goodPair +=2;
            else
                not_good++;
            i++,j--;
        }

        string ans="";
        for(int i=0;i<=n;i++)
        {
            int total = i;
            total -= not_good;
            if(total < 0)
            { 
                ans +='0';
                continue;
            }
            total=max((total%2),total-goodPair);
            total=max(0,total-(n%2));

            if(total==0)
                ans +='1';
            else
                ans +='0';
        }
        cout<<ans<<endl;
    }
    return 0;
}