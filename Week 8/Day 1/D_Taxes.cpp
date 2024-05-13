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

bool isPrime(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    Code By Imam
    int n; cin>>n;

    if (isPrime(n))
        cout << 1 << '\n';
    else if (n % 2 == 0)
        cout << 2 << '\n';
    else
    {
        if (isPrime(n - 2))
            cout << 2 << '\n';
        else
            cout << 3 << '\n';
    }
    return 0;
}