#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n;
    cin>>n;
    vector<int> freq(n+1,0);
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        freq[x]++;
    }
    int forget_e=0;
    for(int i=1;i<=n;i++)
    {
        if(freq[i]==0)
        {
            forget_e=i;
            break;
        }
    }
    cout<<forget_e<<"\n";
    return 0;
}