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
    for(ll &i:ar) cin>>i;

    //collect distinct values from ar
    set<ll> uniq(ar.begin(),ar.end());
    vector<ll> dif(uniq.begin(),uniq.end());

    //if all value are the same in ar
    if(dif.size()==1)
    {
        cout<<0<<" "<<0<<endl;
        return 0;
    }
    //Calculate the differences between each distinct value and the first one
    ll gcd_dif = dif[1]-dif[0];
    for(ll i=2;i<dif.size();i++)
    {
        gcd_dif = gcd(gcd_dif, (dif[i]-dif[0]));
    }

    //number of people and number of swords each person has taken
    ll y=0;
    for(ll i=0;i<n;i++)
    {
        y+= (dif.back()-ar[i])/gcd_dif;
    }

    cout<<y<<" "<<gcd_dif<<'\n';
    return 0;
}