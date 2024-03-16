#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int a,b,c;
    cin>>a>>b>>c;
    bool ok=false;
    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            int x = (i*a) + (j*b);
            if(x<=c)
            {
                if(x==c)
                {
                    ok=true;
                    break;
                }
            }
            else break;
        }
    }
    if(ok) cout<<"Yes"<<"\n";
    else cout<<"No"<<"\n";
    return 0;
}