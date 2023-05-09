#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    double c, d;
    cin >> c >> d;
    ll ans = LLONG_MAX;
    for (int i =1; i<=1e5; i++) {
        ans = min(ans, (ll) (i-1+ ceil(c/i) + ceil(d/i)) );
    }
    cout << ans << endl;

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