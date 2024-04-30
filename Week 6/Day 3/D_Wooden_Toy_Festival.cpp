#include<bits/stdc++.h>
#define ll long long
using namespace std;

//Speed
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

void solve()
{
    int n; cin>>n;
    vector<int> ar(n);
    for(int &i:ar) cin>>i;
    sort(ar.begin(),ar.end());

    //lamda function
    auto ok = [&](ll mid)
    {
        ll cnt=0, st = ar[0];
        for(int i=0;i<n;i++)
        {
            ll x = ceil((ar[i]-st)/2.0);
            if(x>mid)
            {
                cnt++;
                st=ar[i];
            }
        }
        if(cnt<3) return true;
        return false;
    };
    
    //binary search on answer
    ll l=0, r=1e15, ans;
    while(l<=r)
    {
        ll mid = (l+r)/2;
        if(ok(mid))
        {
            ans=mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout<<ans<<'\n';
}
int main()
{
    Code By Imam
    int t;cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
/*
ekta wooden shop a 3 jon cervers kaj kore. tara ekjon ek dike expert.
now tader twon a ekta wooden toy festivle hobe, so tara sekane 
ekta shop dite cai. jekhane each persion ekekta toy banate expert.
mela te n people asbe. people tader toy banate dibe, tara instantly
people der toy deliver dibe. 
suppose jon cervers er modde x cerver a 1 banate pare, y cerver 2
banate pare & z cerver 3 banate pare.
n=5
toy= 1 1 2 2 3
ekhane x er 1 banate 0 time lagbe.
       y er 2 banate 0 time lagbe.
       z er 3 banate 0 time lagbe.
cause tara eigulu banate expert tai kono customer ke wait korte hoy nai
but!
n=5
toy= 1 2 3 4 5
     0 0 0 
     but 4 & 5 tara banate pare na.
     4 & 5 jei cervers banabe tar absulate value er 
     difference tar waiting time. such that
     if x cerver make kore then waiting time abs(4-1)=3
     if y cerver make kore then waiting time abs(4-2)=2
     if z cerver make kore then waiting time abs(4-3)=1
     same 5 er jonno.

problem wats=> x,y & z er value ki choose korle maximum waiting time ta minimum 
korte pare?
*/