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
        //List of prime numbers less than 32
        vector<int> prime = {2,3,5,7,11,13,17,19,23,29,31};
        int n; cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        vector<int> color(n,0);//store the color for each number
        vector<int> primeToColor(32,-1);

        int cnt=0;//number of unique color

        //assign colors to each number based on their smallest prime factor
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<11;j++)
            {
                if(ar[i]%prime[j]==0)
                {
                    if(primeToColor[prime[j]]==-1)
                    {
                        cnt++;
                        primeToColor[prime[j]] = cnt;
                    }
                    color[i]=primeToColor[prime[j]];
                    break;
                }
            }
        }

        //print the number of unique colors used
        cout<<cnt<<'\n';
        for(auto c:color) cout<<c<<" ";
        cout<<'\n';
    }
    return 0;
}