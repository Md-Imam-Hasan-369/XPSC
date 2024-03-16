#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int s,t;
    cin>>s>>t;
    int cnt=0;
    for(int a=0;a<=s;a++)
    {
        for(int b=0;a+b<=s;b++)
        {
            for(int c=0;a+b+c<=s;c++)
            {
                if(a*b*c<=t) cnt++;
            }
        }
    }
    cout<<cnt<<"\n";
    return 0;
}