#include<bits/stdc++.h>
using namespace std;
//Longest Common Substring code
int main()
{
    int t; cin>>t;
    while(t--)
    {
        string a,b;
        cin>>a>>b;
        int n = a.size();
        int m = b.size();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                if(i==0|| j==0) dp[i][j]=0;
            }
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(a[i-1]==b[j-1])
                {
                    int ans = dp[i-1][j-1];
                    dp[i][j] = ans+1;
                }
                else
                {
                    dp[i][j] = 0;
                }
            }
        }
        int mx = 0;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                mx = max(mx, dp[i][j]);
            }
        }
        
        cout<<(n-mx)+(m-mx)<<'\n';
    }
    return 0;
}
/*
abdz
kbdy
output: bd
*/