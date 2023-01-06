#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

ll bin_exp( ll a, ll n) {
    ll res = 1;
    while (n > 0) {
        if (n & 1) {
            res = res * a;
        }
        a = a * a;
        n >>= 1;
    }
    return res;
}

void solve () {
    ll n;
    cin >> n;
    ll x = 0;
    ll r = n;
    while (r > 0) {
        if (r & 1) x++;
        r >>= 1;
    }
    ll ans = bin_exp(2, x);
    cout << max( (ll) 0, (n+1) - ans ) << " " << ans << endl;
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