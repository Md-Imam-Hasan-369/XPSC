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
    int n; cin>>n;
    if(n%2==0)
    {
        int mx_num = n/2;
        cout<<mx_num<<endl;
        for(int i=1;i<=mx_num;i++)
            cout<<2<<" ";
    }
    else if(n==3)
    {
        cout<<1<<endl;
        cout<<3<<endl;
    }
    else
    {
        n=n-3;//convert even
        int mx_num = n/2;
        cout<<mx_num+1<<endl;
        for(int i=1;i<=mx_num;i++)
            cout<<2<<" ";
        cout<<3<<" ";
    }
    return 0;
}