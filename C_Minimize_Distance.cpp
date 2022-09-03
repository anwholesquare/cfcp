#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
        ll n = 0, m = 0, k = 0, t = 0;
        cin >> n >> k;
        vector<ll> a, b;
        a.push_back(0);
        b.push_back(0);
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            if (x >= 0)
                a.push_back(x);
            else
                b.push_back(-x);
        }
        sort(all(a));
        sort(all(b));
 
        vector<ll> v;
        for (int i = a.size() - 1; i > 0;)
        {
            v.push_back(a[i]);
            i -= k;
        }
        for (int i = b.size() - 1; i > 0;)
        {
            v.push_back(b[i]);
            i -= k;
        }
        sort(all(v));
        ll ans = 0;
        for (int i = 0; i<v.size(); i++) {
            ll x = v[i];
            ans += x * 2;
        }
            
        ans -= v.back();
        cout << ans << '\n';

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}