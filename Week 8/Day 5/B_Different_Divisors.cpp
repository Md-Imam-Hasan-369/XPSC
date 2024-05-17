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

vector<ll> prime;
void sieve()
{
    const int MAX = 100001;
    vector<bool> v(MAX,true);
    v[0]=v[1]=false; // 0 and 1 are not prime

    for(int i=2;i*i<MAX;i++)
    {
        if(v[i])
        {
            for(int j=i+i;j<MAX;j+=i)
                v[j]=false;
        }
    }

    for(int i=2;i<MAX;i++)
    {
        if(v[i])
            prime.push_back(i);
    }
}
int main()
{
    Code By Imam
    sieve();//generate the prime number

    int t; cin>>t;
    while(t--)
    {
        ll d; cin>>d;

        ll ans1=0, ans2=0;
        // Find the first prime greater than or equal to d + 1
        for(int i=0;i<prime.size();i++)
        {
            if(prime[i] >= d+1)
            {
                ans1 = prime[i];
                break;
            }
        }
        // Find the first prime greater than or equal to ans1 + d
        for(int i=0;i<prime.size();i++)
        {
            if(prime[i] >= d+ans1)
            {
                ans2 = prime[i];
                break;
            }
        }

        cout<<ans1*ans2<<'\n';
    }
    return 0;
}