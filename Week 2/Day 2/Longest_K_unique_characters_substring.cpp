#include<bits/stdc++.h>
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

//Code
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n=s.size();
        unordered_map<char,int> mp;
        int l=0,r=0,ans=INT_MIN;
        while(r<n)
        {
            mp[s[r]]++;
            while(mp.size() > k)
            {
                mp[s[l]]--;
                if(mp[s[l]]==0)
                {
                    mp.erase(s[l]);
                }
                l++;
            }
            
            if(mp.size()==k)
            {
                ans = max(ans,(r-l+1));
            }
            r++;
        }
        if(ans==INT_MIN)
            return -1;
        return ans;
    }
};
int main()
{
    Code By Imam
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
    return 0;
}

//Link-> https://www.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1