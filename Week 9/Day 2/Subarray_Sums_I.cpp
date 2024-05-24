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
    ll n,x;
    cin>>n>>x;
    vector<ll> ar(n);
    for(auto &i:ar) cin>>i;

    ll sum=0,cnt=0;
    unordered_map<ll,ll> mp;
    mp[0]=1;
    for(ll val:ar)
    {
        sum +=val;
        if(mp.find(sum-x)!=mp.end())
        {
            cnt += mp[sum-x];
            // cout<<mp[sum-x]<<endl;
        }
        mp[sum]++;
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
