#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll k = n;
    vector<ll> v(n, 0);
    ll j = 0;
    while (k--) {
        cin >> v[j]; j++;
    }
    ll i =0;
    ll minx = (v[i+1] - v[i]);
    ll maxx = v[n-1] - v[i];
    cout << minx << " " << maxx << endl;
    for (i = 1; i<n-1; i++) {
        minx = min (v[i+1] - v[i], v[i] - v[i-1]);
        maxx = max (v[n-1] - v[i], v[i] - v[0]);
        cout << minx << " " << maxx << endl;
    }

    if (n > 1) {
        minx = v[i] - v[i-1];
        maxx = v[n-1] - v[0];
        cout << minx << " " << maxx << endl;
    }

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