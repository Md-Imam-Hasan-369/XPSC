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
    int prev = 0;//400
    int mul = 0;
    for(int i=1;i<=b;i++)
    {
        mul = i*c;
        if(mul > b) break;
        prev = mul;
    }

    if(prev >= a && prev <= b)
    {
        cout<<prev<<"\n";
    }
    else cout<<-1<<"\n";
    return 0;
}