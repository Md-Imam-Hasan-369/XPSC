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
    ll n; cin>>n;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    ll sum=0,cnt=0;
    unordered_map<ll,ll> mp;
    mp[0]=1;
    for(auto val:ar)
    {
        sum+=val;
        ll remainder = ((sum%n)+n)%n; //Ensure non-negative remainder
        // cout<<remainder<<endl;
        if(mp.find(remainder)!=mp.end())
        {
            cnt+=mp[remainder];
        }
        mp[remainder]++;
    }
    cout<<cnt<<'\n';
    return 0;
}
/*
====== unordered_map ======
** Average time complexity for insertions, deletions, and lookups is O(1)
** The order of elements is not maintained
** It uses a hash table internally.

--------- map ------------
** Time complexity for insertions, deletions, and lookups is O(log n)
** Elements are stored in a sorted order
** It uses a balanced binary search tree (like Red-Black Tree) internally
*/