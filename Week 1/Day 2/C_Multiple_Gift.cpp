#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Aliases
using ll= long long;
using lld= long double;
using ull= unsigned long long;
 
//Constants
const lld pi= 3.141592653589793238;
// const ll INF= LONG_LONG_MAX;
const ll mod=1e9+7;

//Code by Md Imam Hasan
//Language C++
//Practice->Success

//Code

//Main
int main()
{
    Code By Imam
    ll x,y;
    cin>>x>>y;
    ll cnt=1;
    while(x*2 <= y)
    {
        cnt++;
        x *= 2;
    }
    cout<<cnt<<"\n";
    return 0;
}
//End