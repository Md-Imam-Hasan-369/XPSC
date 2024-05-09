#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define endl '\n'
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
        int n;cin>>n;
        vector<int> ar(n);
        for(int &i:ar) cin>>i;

        vector<int> take;
        string s;
        bool broken=false;
        for(int i=0;i<n;i++)
        {
            if(take.empty())
            {
                take.push_back(ar[i]);
                s += "1";
            }
            else
            {
                if(broken)
                {                              //1
                    if(ar[i] < take.back())//3 2 1 2 3
                        s +="0";
                    else
                    {                              //4
                        if(ar[i]>take[0])//3 7 7 9 2 4 6 3 4
                            s +="0";
                        else
                        {
                            take.push_back(ar[i]);
                            s +="1";
                        }
                    }
                }
                else
                {
                    //till now, the array is sorted
                    if(ar[i]>=take.back())
                    {
                        take.push_back(ar[i]);
                        s +="1";
                    }
                    else
                    {
                        if(ar[i]<=take[0])
                        {
                            take.push_back(ar[i]);
                            s +="1";
                            broken=true;
                        }
                        else s+="0";
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    return 0;
}