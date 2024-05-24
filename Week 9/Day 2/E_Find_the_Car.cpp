#include <bits/stdc++.h>
#define ll long long
using namespace std;

// Speed up I/O
#define Code ios_base::sync_with_stdio(false);
#define By cin.tie(NULL);
#define Imam cout.tie(NULL);

int main()
{
    Code By Imam
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, q;
        cin >> n >> k >> q;
        vector<ll> a(k + 1), b(k + 1);
        a[0] = 0,b[0]=0;
        for (int i = 1; i <= k; i++) cin >> a[i];
        for (int i = 1; i <= k; i++) cin >> b[i];

        while (q--)
        {
            ll d;
            cin >> d;
            if (d == 0)
            {
                cout << 0 << ' ';
                continue;
            }
            if (d == n)
            {
                cout << b[k] << ' ';
                continue;
            }

            auto it = upper_bound(a.begin(), a.end(), d);
            int idx = it - a.begin();
            ll ans = b[idx - 1];

            ll dist = a[idx] - a[idx - 1];
            ll time_take = b[idx] - b[idx - 1];

            ll extra_dist = d - a[idx - 1];
            ll extra_time = (extra_dist * time_take) / dist;
            ans += extra_time;

            cout << ans << ' ';
        }
        cout << '\n';
    }
    return 0;
}