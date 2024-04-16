#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

void find_pair(int x)
{
    int a=0,b=0;
    //Find the position of the most significant bit in x
    int bitPosition = __lg(x);
    
    a = 1<<bitPosition;
    b = a^x;
    cout<<b<<" "<<a<<'\n';
}
int main()
{
    Code By Imam
    
    int t; cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        find_pair(x);
    }
    return 0;
}