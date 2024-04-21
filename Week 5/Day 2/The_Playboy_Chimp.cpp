#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int find_smallest(int n,vector<int>& ar,int x)
{
    int l=0,r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid] < x)//4
        {
            ans = ar[mid];
            l = mid+1;
        }
        else
        {
            r = mid-1;
        }
    }
    return ans;
}
int find_largest(int n,vector<int>&ar,int x)
{
    int l=0,r=n-1, ans=-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid] > x)
        {
            ans = ar[mid];
            r = mid-1;
        }
        else
        {
            l = mid+1;
        }
    }
    return ans;
}
int main()
{
    Code By Imam
    
    int n; cin>>n;
    vector<int> ar(n);
    for(auto &i:ar) cin>>i;

    int q; cin>>q;
    while(q--)
    {
        int x; cin>>x;
        int small = find_smallest(n,ar,x);
        int large = find_largest(n,ar,x);

        if(large==-1)
            cout<<small<<" "<<"X"<<'\n';
        else
            cout<<small<<" "<<large<<'\n';
    }
    return 0;
}
/*
input
9
1 4 5 7 9 11 13 17 18
4
6 17 9 18

output
5 7
13 18
7 11
17 X
*/