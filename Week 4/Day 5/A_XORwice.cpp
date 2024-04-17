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
        int a,b;
        cin>>a>>b;
        cout<<(a^(a&b) + (b^(a&b)))<<endl;
    }
    return 0;
}