#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    // ll l, r, a;
    // cin >> l >> r >>a;
    
    // ll p1 = (r/a) + (r % a);
    // ll before = (r-(r%a)-1);
    // ll p2 = (before/a) + (a-1);

    // if (p2 > p1 && before >= l) {
    //     cout << p2 << endl; return;
    // }else{
    //     cout << p1 << endl; return;
    // }

    ll l;
    ll r;
    ll a;
    cin >> l >> r >> a;

    ll ans1 = (r/a) + r % a;
    ll ans2c = (r-(r%a)-1);
    ll ans2 = (ans2c >= l) ? (ans2c/a) + (ans2c % a) : 0;
    cout << max(ans1, ans2) << endl;
    return;



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