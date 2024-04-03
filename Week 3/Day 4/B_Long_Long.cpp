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
        int n; cin>>n;
        vector<int> ar(n);
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum += abs(ar[i]);
        }
        bool flag=true;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(ar[i] < 0 && flag)
            {
                cnt++;
                flag=false;
            }
            else if(ar[i] > 0)
            {
                flag=true;
            }
        }
        cout<<sum<<" "<<cnt<<"\n";
    }
    return 0;
}