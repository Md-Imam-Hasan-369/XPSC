#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int a,b,c;
    cin>>a>>b>>c;
    for(int y=0;y<=c/b;y++)
    {
        int x = (c-y*b)/a;
        if(a*x+b*y==c && x>=0)
        {
            cout<<"Yes"<<"\n";
            return 0;
        }
    }
    cout<<"No"<<"\n";
    return 0;
}
/*
//math equation-> ax+by=c
y er different different valuer jnne x er different value ashbe.. x er value jodi non negative integer hoy taahole true nahole false..
tar mane y er upor loop colbe
*/
