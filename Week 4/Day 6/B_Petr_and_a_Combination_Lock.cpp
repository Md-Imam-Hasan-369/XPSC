#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n; cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    bool flag = false;
    int p = 1<<n;
    for(int i=0;i<p;i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
            if((i>>j)&1 !=0)
                sum += ar[j];
            else
                sum -= ar[j];
        }
        if(sum%360==0)
        {
            flag=true;
            break;
        }
    }
    if(flag) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
    return 0;
}
/*
3
10 20 30

    2 1 0

0  -> 0 0 0  -> -10 -20 -30
1  -> 0 0 1  -> -10 -20  30   sum=0 (sum%360==0) flag=1
2  -> 0 1 0
3  -> 0 1 1
4  -> 1 0 0
5  -> 1 0 1
6  -> 1 1 0
7  -> 1 1 1
*/