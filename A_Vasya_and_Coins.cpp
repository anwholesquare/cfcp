#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll a, b;
    cin >> a >> b;
    if (a == 0) {
        cout << "1\n"; return;
    }
    else if (b == 0) {
        cout << a + 1 << "\n"; return;
    }
    else {
        cout << b*2 + a + 1 << endl;
    }
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