//Problem Link: https://www.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1

//Code
#include<bits/stdc++.h>
using namespace std;

class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &a , int n){
        int l=0,r=0;
        long long sum=0,ans=0;//700, 700
        while(r<n)
        {
            sum+=a[r];//400
            if((r-l+1)==k)
            {
                ans = max(ans,sum);
                sum -= a[l];
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        return ans;
    }
};

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 