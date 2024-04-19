#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    
    int n,k;
    cin>>n>>k;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];

    while(k--)
    {
        int target;
        cin>>target;

        bool flag=false;
        int l=0,r=n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(ar[mid]==target)
            {
                flag = true;
                break;
            }
            else if(target < ar[mid])
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}