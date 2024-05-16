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
    ll x,y;
    cin>>x>>y;
    
    if((y*log2(x)) > (x*log2(y)))
        cout<<">"<<endl;
    else if((y*log2(x) < (x*log2(y))))
        cout<<"<"<<endl;
    else cout<<"="<<endl;
    return 0;
}