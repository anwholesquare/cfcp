#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, k,d;
    cin >> n >> k >> d;
    vector<ll> v;
    for (int i=0; i<n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }

    sort(all(v), greater<ll>());
    ll res = 0;
    for (int i=0; i<n && k > 0; i++) {
        if (v[i] % d == 0) {res += v[i]; k--;}
    }
    if (res == 0) { cout << -1 << endl;}
    else cout << res << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
   // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}