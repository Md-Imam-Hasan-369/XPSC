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
    vector<int> ar(n);
    for(int &i:ar) cin>>i;

    int ans=0;
    set<int> s;
    int l=0,r=0;
    while(r<n)//sliding window technique
    {
        while(s.find(ar[r])!=s.end())
        {
            s.erase(ar[l]);
            l++;
        }
        s.insert(ar[r]);
        ans = max(ans,(r-l+1));
        r++;
    }
    cout<<ans<<endl;
    return 0;
}