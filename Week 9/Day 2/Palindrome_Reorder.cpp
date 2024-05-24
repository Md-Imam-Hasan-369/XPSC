#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a/gcd(a,b))*b)
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    string s; cin>>s;
    map<char, int> freq;
    for(char ch:s)
        freq[ch]++;
    
    //count odd char
    int odd_cnt=0;
    char odd_char;
    for(auto p:freq)
    {
        if(p.second%2 != 0)
        {
            odd_cnt++;
            odd_char=p.first;
        }
    }
    //check multiple odd 
    if(odd_cnt>1)
    {
        cout<<"NO SOLUTION"<<'\n';
        return 0;
    }
    
    //Build palindrome
    string First_half="";
    string Second_half="";
    for(auto p:freq)
    {
        string part(p.second/2,p.first);
        // cout<<part<<endl;
        First_half += part;
    }

    Second_half=First_half;
    reverse(Second_half.begin(),Second_half.end());
    // If there is a character with an odd frequency, place it in the middle
    string mid_char = (odd_cnt==1)? string(1,odd_char) : "";
    string ans = First_half+mid_char+Second_half;
    cout<<ans<<'\n';
    return 0;
}