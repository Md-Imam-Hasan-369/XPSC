//Problem Link-> 

//Code
#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

vector<long long> printFirstNegativeInteger(long long int a[],
                                             long long int n, long long int k) {
    
    queue<long long> q;
    long long int l=0,r=0;
    vector<long long> v;
    
    while(r<n)
    {
        if(a[r] < 0)
        {
            q.push(a[r]);
        }
        if(r<k-1)
        {
            r++;
        }
        else
        {
            if(q.empty()) v.push_back(0);
            else
            {
                v.push_back(q.front());
                
                if(a[l]<0)
                {
                    q.pop();
                }
            }
            l++;
            r++;
        }
    }
    return v;
 }
int main()
{
    Code By Imam
    long long int t, i;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}