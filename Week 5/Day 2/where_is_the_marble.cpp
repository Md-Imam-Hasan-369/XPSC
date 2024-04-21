#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int tc=1;
    while(true)
    {
        int n,q;
        cin>>n>>q;
        if(n==0 && q==0) break;
        vector<int> ar(n);
        for(auto &i:ar) cin>>i;

        sort(ar.begin(),ar.end());
        cout<<"CASE# "<<tc<<":"<<'\n';
        tc++;

        while(q--)
        {
            int target;
            cin>>target;
            int l=0,r=n-1, idx=-1;
            while(l<=r)
            {
                int mid = (l+r)/2;
                if(ar[mid]==target)
                {
                    idx = mid;
                    r = mid-1;
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

            if(idx==-1)
                cout<<target<<" not found"<<'\n';
            else
                cout<<target<<" found at "<<idx+1<<'\n';
        }
    }
    return 0;
}