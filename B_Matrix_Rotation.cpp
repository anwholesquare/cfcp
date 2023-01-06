#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

bool doer (ll x1, ll x2, ll x3, ll x4) {
    if (x1 < x2 && x3 < x4) {
        if (x1 < x3 && x2 < x4) {
            return true;
        }
    }
    return false;
}

void solve () {
    vector<ll> v(5);
    for (int i =1; i<=4; i++) {
        cin >> v[i];
    }

    if (doer(v[1], v[2], v[3], v[4]) || doer (v[3], v[1], v[4], v[2]) || doer (v[2], v[4], v[1], v[3]) || doer (v[4], v[3], v[2], v[1])) {
        cout << "YES\n"; return;
    }
    cout << "NO\n";
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