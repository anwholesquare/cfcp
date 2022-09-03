#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;

    ll x; 
    bool flag = 0;
    while (n--) {
        cin >> x;
        if (x < 0) flag = 1;
    }

    if (flag) {
        cout << "NO\n"; return;
    }
    cout << "YES\n";
    cout << 101 << endl;
    for (int i = 0; i<101; i++) {
        cout << i << " ";
    }
    cout << endl;
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