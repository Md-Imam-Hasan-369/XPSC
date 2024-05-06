#include<bits/stdc++.h>
#define ll long long
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a * b) / gcd(a, b))
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n; cin>>n;
    string s[] = {"b","b","a","a"};
    int i=0,j=0;
    while(i<n)
    {
        cout<<s[j];
        i++,j++;
        if(j==4) j=0;
    }
    cout<<'\n';
    return 0;
}