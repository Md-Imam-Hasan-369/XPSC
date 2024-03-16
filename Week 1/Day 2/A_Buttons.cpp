#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int a,b;
    cin>>a>>b;
    int k=2;
    int ans = 0;
    while(k--)
    {
        if(a==b)
        {
            ans += a;
            a--;
        }
        else if(a > b)
        {
            ans += a;
            a--;
        }
        else
        {
            ans += b;
            b--;
        }
    }
    cout<<ans<<"\n";
    return 0;
}