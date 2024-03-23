#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int k,s;
    cin>>k>>s;
    int cnt=0;//6
    for(int i=0;i<=k;i++)
    {
        for(int j=0;j<=k;j++)
        {
            int z = s-i-j;//2-2-2
            if(z>=0 && z<=k) cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}