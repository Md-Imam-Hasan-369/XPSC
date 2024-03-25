#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s; cin>>s;

        vector<int> freq(26,0);
        for(char c:s)
        {
            int val=c-'a';
            freq[val]++;
        }
        int odd_cnt=0;
        for(int x:freq)
        {
            odd_cnt += x%2==1;
        }

        if(odd_cnt > k+1) cout<<"NO"<<"\n";
        else cout<<"YES"<<"\n";
    }
    return 0;
}
/*
6 2
bacacd

frequency-> a-> 2
            b-> 1
            c-> 2
            d-> 1

odd_cnt=0;1+1
    b=1
    d=1

 if(2 > 2+1) 
*/