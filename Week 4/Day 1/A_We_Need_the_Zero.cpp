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
        int XOR = 0;
        vector<int> ar(n);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            XOR ^= ar[i];
        }
        //if whole array xor is 0 then print any number
        if(XOR==0) 
            cout<<0<<endl;
        else
        {
            //if n is odd, then print xor
            if(n%2==1)
                cout<<XOR<<endl;
            else cout<<-1<<endl;
        }
    }
    return 0;
}