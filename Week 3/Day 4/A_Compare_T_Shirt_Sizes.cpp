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
        string a,b;
        cin>>a>>b;
        int si1 = a.size();
        int si2 = b.size();
        //add last 2 character of string
        string nt1,nt2;
        if(si1>=2)
        {
            nt1 += a[si1-2];
            nt1 += a[si1-1];
        }
        else nt1 = a;
        if(si2>=2)
        {
            nt2 += b[si2-2];
            nt2 += b[si2-1];
        }
        else nt2 = b;

        if(nt1!="XM" and nt1!="LL" and nt1!="SX")
        {
            if(nt2!="XM" and nt2!="LL" and nt2!="SX")
            {
                if(a[si1-1]=='S' && b[si2-1]=='S')
                {
                    if(si1 > si2) cout<<"<"<<endl;
                    else if(si1 < si2) cout<<">"<<endl;
                    else cout<<"="<<endl;
                }
                else if(a[si1-1]=='L' && b[si2-1]=='L')
                {
                    if(si1 > si2) cout<<">"<<endl;
                    else if(si1 < si2) cout<<"<"<<endl;
                    else cout<<"="<<endl;
                }
                else if(a[si1-1]=='M' && b[si2-1]=='M')
                {
                    if(si1 > si2) cout<<">"<<endl;
                    else if(si1 < si2) cout<<"<"<<endl;
                    else cout<<"="<<endl;
                }
                else if(a[si1-1]=='L' && b[si2-1]=='S') 
                    cout<<">"<<endl;
                else if(a[si1-1]=='S' && b[si2-1]=='L')
                    cout<<"<"<<endl;
                else if(a[si1-1]=='L' && b[si2-1]=='M')
                    cout<<">"<<endl;
                else if(a[si1-1]=='M' && b[si2-1]=='L')
                    cout<<"<"<<endl;
                else if(a[si1-1]=='M' && b[si2-1]=='S')
                    cout<<">"<<endl;
                else if(a[si1-1]=='S' && b[si2-1]=='M')
                    cout<<"<"<<endl;
            }
        }
    }
    return 0;
}