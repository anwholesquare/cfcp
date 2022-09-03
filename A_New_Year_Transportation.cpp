#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n ,t;
    cin >> n >> t;

    vector<ll> v(n, 0);
    for (int i=1; i<n; i++) {
        cin >> v[i];
    }

    ll i = v[1] + 1;
    for (; i <n;) {
        if (i == t) {cout << "YES\n"; return;}
        else if (i > t){cout << "NO\n"; return;}
        else {
            i = v[i] + i;
            //cout << i << endl;
        }
    }

    if (i == t) {cout << "YES\n"; return;}

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