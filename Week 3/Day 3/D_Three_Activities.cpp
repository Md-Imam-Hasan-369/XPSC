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
        int n; cin>>n;
        vector<int> v1(n),v2(n),v3(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        for(int i=0;i<n;i++) cin>>v2[i];
        for(int i=0;i<n;i++) cin>>v3[i];
        
        vector<pair<int,int>> ski,movie,game;
        for(int i=0;i<n;i++)
        {
            ski.push_back({v1[i], i});
            movie.push_back({v2[i], i});
            game.push_back({v3[i], i});
        }
        
        sort(ski.rbegin(),ski.rend());
        sort(movie.rbegin(),movie.rend());
        sort(game.rbegin(),game.rend());

        long long sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    if(ski[i].second != movie[j].second && ski[i].second != game[k].second)
                    {
                        if(movie[j].second != game[k].second)
                        {
                            sum = max(sum, 1LL*(ski[i].first + movie[j].first + game[k].first));
                        }
                    }
                }
            }
        }
        cout<<sum<<"\n";
    }
    return 0;
}