#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    map<ll, map<ll, bool> > f;
    for (int i =0; i< m; i++) {
        ll x, y;
        cin >> x >> y;
        f[x][y] = 1;
        f[y][x] = 1;
    }
    ll start = 1;
    ll res = n;
    for (int i =2; i<=n; i++) {
        for (auto it = f[i].begin(); it != f[i].end(); it++) {
            ll d = it->first;
            if (d > i) break;
            if (d >= start && d <= i) {
                ll n = (i-start-1);
                res += (n*(n+1)/2);
                start = i; break;
            }
        }
        if (i == n && start != i) {
            ll n = (i-start);
            res += (n*(n+1)/2);
        }
    }
    cout << res << endl;
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