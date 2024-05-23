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
    vector<int> even,odd;
    for(int i=1;i<=n;i++)
    {
        if(i%2==0)
            even.push_back(i);
        else odd.push_back(i);
    }
    
    for(int i=0;i<odd.size();i++)
        even.push_back(odd[i]);
    
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(abs(even[i]-even[i+1])==1)
        {
            flag=false;
            break;
        }
    }

    if(flag)
    {
        for(int val:even) cout<<val<<" ";
    }
    else cout<<"NO SOLUTION";
    cout<<endl;
    return 0;
}