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
        int l=0,r=n-1, ans=-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(ar[mid]>=target)
            {
                ans = mid;
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        if(ans != -1)
            cout<<ans+1<<endl;// +1 er reason amar index start 0 but tader index 1
        else cout<<n+1<<endl;
    }
    return 0;
}