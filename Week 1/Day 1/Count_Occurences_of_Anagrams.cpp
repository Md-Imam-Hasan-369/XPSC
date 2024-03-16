//Problem Link: https://www.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

//Code
#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
	int search(string pat, string txt) {
        int n=txt.size();
        int m=pat.size();
        int a[26]={0}, b[26]={0};
        
        for(int i=0;i<m;i++)
        {
            int val = pat[i] - 'a';//97
            b[val]++;
        }
        
        int cnt=0;
        
        int l=0,r=0;
        while(r<n)
        {
            int val = txt[r]-'a';
            a[val]++;
            
            if((r-l+1)==m)
            {
                bool flag = true;
                for(int i=0;i<26;i++)
                {
                    if(a[i] != b[i])
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag) cnt++;
                val = txt[l]-'a';
                a[val]--;
                l++;
            }
            r++;
        }
        return cnt;

	}

};
int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}