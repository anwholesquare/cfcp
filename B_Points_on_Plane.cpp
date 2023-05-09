#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve () {
    ll n;
    cin >> n;
    ll res = sqrtl(n-1);
    cout << res << endl;
    return;
}

int main () {
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}