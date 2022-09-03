#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;

    for (int i = 1; i<=35; i++) {
        int res  = i* (i +1) /2;
        if (n == res) {
            cout << "YES\n"; return;
        }
    }
    cout << "NO\n"; 
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}