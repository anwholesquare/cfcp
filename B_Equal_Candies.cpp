#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve() {
    ll n;
    cin >> n;
    vector<ll> v (n,1);
    ll min = INT_MAX;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        if (min > v[i]) min = v[i];
    }
    ll ans = 0;
    for (int i =0; i<n; i++ ) {
        ans += (v[i] > min) ? (v[i] - min) : 0;
    }

    cout << ans << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}