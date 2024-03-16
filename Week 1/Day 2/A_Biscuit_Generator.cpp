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
    int cnt=0;
    int time = c+0.5;
    for(int i=1;i<=c;i++)
    {
        int x = a*i;//9
        if(x>time) break;//9.5
        cnt++;
    }
    
    if(cnt==0)cout<<0<<"\n";
    else cout<<b*cnt<<"\n";
    return 0;
}