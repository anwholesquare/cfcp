#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector<ll> v;
    ll f;
    cin >> f;
    for (int i=0; i<n-1; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(all(v));
    for (int i=0; i<n-1; i++) {
        if (f < v[i] ) {
            f += (v[i] - f + 1)/2;
        }
    }
    cout << f << endl;

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