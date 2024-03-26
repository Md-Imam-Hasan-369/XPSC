#include<bits/stdc++.h>
using namespace std;

#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
bool check_palindrome(vector<int>& v,int x)//v[i] or v[n-1-i]
{
    int n=v.size(),i=0,j=n-1;
    while(i<j)
    {
        if(v[i]==x)
            i++;
        else if(v[j]==x)
            j--;
        else if(v[i] != v[j])
            return 0;
        else 
            i++,j--;
    }
}
int main()
{
    Code By Imam
    int t; 
    cin >> t;
    while(t--)
    {
        int n; 
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin>>v[i];

        bool flag=true;
        for(int i=0;i<n;i++)
        {
            if(v[i] != v[n-1-i])
            {
                flag = check_palindrome(v,v[i]) or check_palindrome(v,v[n-1-i]);
                break;
            }
        }

        if(flag) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
    return 0;
}
