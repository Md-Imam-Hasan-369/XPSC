#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
vector<int> cnt_point(vector<string>& w1,vector<string>& w2,vector<string>& w3)
{
    vector<int> point = {0,0,0};
    set<string> all_w;
    //all word ke set er modde push korbo.
    all_w.insert(w1.begin(),w1.end());
    all_w.insert(w2.begin(),w2.end());
    all_w.insert(w3.begin(),w3.end());

    //map to store player indices for each word
    map<string,vector<int>> mp;
    for(int i=0;i<w1.size();i++)
    {
        //w1 er i-th tomo index er word ke map er modder vector er 0 tomo index a push korechi
        mp[w1[i]].push_back(0);
    }
    for(int i=0;i<w2.size();i++)
    {
        mp[w2[i]].push_back(1);
    }
    for(int i=0;i<w3.size();i++)
    {
        mp[w3[i]].push_back(2);
    }

    for(string word:all_w)
    {
        int cnt = mp[word].size();
        if(cnt==1)
        {
            point[mp[word][0]] +=3;
        }
        else if(cnt==2)
        {
            for(int i=0;i<mp[word].size();i++)
            {
                point[mp[word][i]]++;
            }
        }
    }
    return point;
}
int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<string> w1(n);
        for(int i=0;i<n;i++) cin>>w1[i];
        vector<string> w2(n);
        for(int i=0;i<n;i++) cin>>w2[i];
        vector<string> w3(n);
        for(int i=0;i<n;i++) cin>>w3[i];

        vector<int>v = cnt_point(w1,w2,w3);

        cout<<v[0]<<" "<<v[1]<<" "<<v[2];
        cout<<"\n";
    }
    return 0;
}