#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    
    int t; cin>>t;
    while(t--)
    {
        int x;
        cin>>x;

        int tmp=x;
        vector<int> v;
        while(tmp != 0)
        {
            if((tmp & 1)%2 != 0)
                v.push_back(1);
            else
                v.push_back(0);
            
            tmp = tmp>>1;
        }

        int cnt=0,j=0;
        for(int i=v.size()-1;i>=0;i--)
        {
            if(v[i]==1)
                j++;
            else
            {
                if(j>=2)
                    cnt++;
            }
        }

        cout<<(1<<cnt)<<endl;
    }
    return 0;
}