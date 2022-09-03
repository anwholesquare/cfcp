#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    cout << "Division ";
    if (n >=1900) {
        cout << 1 << endl;
    }
    else if (n < 1900 && n>= 1600) {
        cout << 2 << endl;
    }
    else if (n < 1600 && n >= 1400) {
        cout << 3 << endl;
    }
    else {
        cout << 4 << endl;
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