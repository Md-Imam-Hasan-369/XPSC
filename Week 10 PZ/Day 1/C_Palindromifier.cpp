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
    string s; cin>>s;
    int n=s.size();
    string tmp=s;
    reverse(tmp.begin(),tmp.end());
    if(s==tmp) cout<<0<<'\n';
    else
    {
        cout<<3<<'\n';
        cout<<"R "<<n-1<<'\n';
        cout<<"L "<<n<<'\n';
        cout<<"L "<<2<<'\n';
    }
    return 0;
}