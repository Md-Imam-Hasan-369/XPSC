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
        int n,m;
        cin>>n>>m;
        int ar[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>ar[i][j];
            }
        }

        int mx = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int cur_sum = 0;

                //lower-right diagonal
                int ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    cur_sum +=ar[ci][cj];
                    ci++;
                    cj++;
                }
                //upper-left diagonal
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    cur_sum +=ar[ci][cj];
                    ci--;
                    cj--;
                }
                //lower-left diagonal
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    cur_sum+=ar[ci][cj];
                    ci++;
                    cj--;
                }
                //upper-right diagonal
                ci = i, cj = j;
                while(ci >= 0 && ci < n && cj >= 0 && cj < m)
                {
                    cur_sum +=ar[ci][cj];
                    ci--;
                    cj++;
                }
                
                // Subtract the value of current cell once to adjust for overcounting
                cur_sum-=ar[i][j]*3;
                mx = max(mx, cur_sum);
            }
        }
        cout << mx << endl;
    }
    return 0;
}