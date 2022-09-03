#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll ans = n/3;
    if (n == 1) {cout << 2 << endl; return;}
    if (n % 3 == 0) {cout << ans << endl; return;}
    else {cout << ans+1 << endl; return;}

    
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