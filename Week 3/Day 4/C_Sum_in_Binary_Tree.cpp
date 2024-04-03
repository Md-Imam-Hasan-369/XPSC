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
        long long n; cin>>n;
        long long sum=n;
        while(n!=0)
        {
            long long rem = n/2;
            sum += rem;
            n = rem;
        }
        cout<<sum<<"\n";
    }
    return 0;
}