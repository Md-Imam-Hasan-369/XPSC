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

//check prime or not
int findDivisor(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return i;
        }
    }
    return n;
}
void solve()
{
    ll l,r;
    cin>>l>>r;
    //case 1=> l and r er value 3 hole ans -1
    if(l<=3 && r<=3) {cout<<-1<<'\n'; return;}
    //case 2=> r>l
    if(r>l)
    {
        if(r%2==1) r--;
        cout<<r/2<<" "<<r/2<<'\n';
        return;
    }
    //case 3=> r=l
    if(findDivisor(l)==l)//jodi prime hoy then -1, note ekhan l er jaigai r o deya jabe
    {
        cout<<-1<<'\n';
        return;
    }
    else cout<<findDivisor(l)<<" "<<l-findDivisor(l)<<endl;
}
int main()
{
    Code By Imam
    int t; cin>>t;
    while(t--)solve();
    return 0;
}