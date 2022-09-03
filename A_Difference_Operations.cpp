#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n;
    cin >> n;
    vector <ll> v, v1;
    for (int i =0; i< n; i++) {
        ll x; cin >> x; v.push_back(x);
    }
    if (v[0] == 1) { cout << "YES\n"; return;}
    for (int i =1; i<n; i++) {
        if (v[i] % v[0] != 0) {cout << "NO\n"; return;}
    }
    cout << "YES\n"; return;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }   
    return 0;
}