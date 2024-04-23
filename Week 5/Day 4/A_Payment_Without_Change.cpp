#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam

    int tc; cin>>tc;
    while(tc--)
    {
        ll a,b,n,s;
        cin>>a>>b>>n>>s;

        if((s%n)<=b and (a*n+b)>=s) cout<<"YES"<<'\n';
        else cout<<"NO"<<'\n';
    }
    return 0;
}
/*
What want to the problem?
suppose for below test case

a b n s
1 2 3 4

3(n) takar 1(a) ta note and 1 takar 2(b) note diye ki 4(s) 
banano possible or not
*/