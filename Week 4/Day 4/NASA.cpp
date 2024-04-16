#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

const int maxN = 1<<15;
vector<int> palindrome;

void mark_palindrome()
{
    for(int k=0;k<maxN;k++)
    {
        //check k is palindrome or not
        string s = to_string(k);
        int i=0,j=s.size()-1;
        bool flag=true;
        
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                flag=false;
                break;
            }
            i++,j--;
        }
        if(flag)
            palindrome.push_back(k);
    }
}
int main()
{
    Code By Imam

    mark_palindrome();

    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> ar(n);
        vector<int> freq(maxN);
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            freq[ar[i]]++;
        }

        long long ans=n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<palindrome.size();j++)
            {
                int XOR_val = ar[i] ^ palindrome[j];
                ans += freq[XOR_val];
            }
        }
        cout<<ans/2<<'\n';
    }
    return 0;
}