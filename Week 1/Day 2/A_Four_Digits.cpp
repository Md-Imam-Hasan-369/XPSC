#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int n;cin>>n;
    int tmp=n;
    int cnt=0;
    while(tmp !=0)
    {
        cnt++;
        tmp = tmp/10;
    }
    
    if(cnt==0) cout<<"0000"<<"\n";
    else if(cnt==1) cout<<"000"<<n<<"\n";
    else if(cnt==2) cout<<"00"<<n<<"\n";
    else if(cnt==3) cout<<"0"<<n<<"\n";
    else cout<<n<<"\n";
    return 0;
}