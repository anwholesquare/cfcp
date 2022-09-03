#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve () {
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x; v.push_back(x);
    }
    ll m;
    cin >> m;
    ll sum = 0;
    while (m--) {
        ll x;
        cin >> x;
        sum += x;
    }

    ll mod = sum % n;
    cout << v[mod] << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}