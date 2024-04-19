#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int binary_search(int n,vector<int>& ar,int target)
{
    int idx=-1;
    int l=0,r=n-1;
    while(l<=r)
    {
        int mid = (l+r)/2;
        if(ar[mid]== target)
        {
            idx = mid;
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
    return idx;
}
int main()
{
    Code By Imam
    
    int n; cin>>n;
    vector<int> ar(n);
    for(int i=0;i<n;i++) cin>>ar[i];
    sort(ar.begin(),ar.end());

    int k; cin>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        auto lb = lower_bound(ar.begin(),ar.end(),l);
        auto rb = lower_bound(ar.begin(),ar.end(),r);

        int l_idx = binary_search(n,ar,*lb);
        int r_idx = binary_search(n,ar,*rb);

        // cout<<*lb<<" "<<*rb<<endl;
        // cout<<l_idx<<" "<<r_idx<<endl;
        
        if(r_idx==-1)
        {
            if(l==*lb and r==*rb)
            {
                cout<<(r_idx-l_idx)+1<<endl;
            }
            else
            {
                cout<<(r_idx - l_idx)<<endl;
            }
        }
        else
        {
            cout<<(n-l_idx)+1<<endl;
        }
    }
    return 0;
}