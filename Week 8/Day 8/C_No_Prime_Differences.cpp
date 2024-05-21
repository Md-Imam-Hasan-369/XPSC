#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
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
        
        int mat[n][m];
        int x=1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j]=x;
                x++;
            }
        }
        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     {
        //         cout<<mat[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        for(int i=0;i<n;i+=2)
        {
            for(int j=0;j<m;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<'\n';
        }
        for(int i=1;i<n;i+=2)
        {
            for(int j=0;j<m;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<'\n';
        }
        cout<<endl;
    }
    return 0;
}