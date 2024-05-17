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
    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<ll> ar(n);
        for(ll &i:ar) cin>>i;

        ll even_gcd=0, odd_gcd=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
                even_gcd = gcd(even_gcd,ar[i]);
            else odd_gcd = gcd(odd_gcd,ar[i]);
        }
        bool even=false, odd=false;
        //check even position value
        for(int i=0;i<n;i+=2)
        {   //means even position er value gulu ke ki odd_gcd diye divisible kina ta check kortechi
            if(ar[i]%odd_gcd==0)
            {
                odd=true;
                break;
            }
        }
        //check odd position value
        for(int i=1;i<n;i+=2)
        {
            if(ar[i]%even_gcd==0)
            {
                even=true;
                break;
            }
        }

        if(even && odd) cout<<0<<'\n';//if both by both divisible
        else if(!even) cout<<even_gcd<<'\n';
        else cout<<odd_gcd<<'\n';
    }
    return 0;
}