#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n,q;
    cin >> n >> q;
    vector<ll> v;
    for (ll i =0; i <n; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort (all(v));
    while (q--) {
        ll x, y;
        cin >> x >> y;
        auto it = lower_bound(all(v), x);
        ll index1 = 0, index2 = 0;
        if (it == v.end()) {
            cout << 0 << endl; continue;
            
        }else {
            index1 = (it - v.begin()) + 1;
        }
        auto it1 = upper_bound(all(v), y);
        if (it1 == v.end()) {
            index2 = n;
        }
        else{
            index2 = (it1 - v.begin());
        }
        ll res = index2 - index1 + 1;
        if (res >= 0) {
            cout << res << endl;
        }else {
            cout << 0 << endl;
        }
        
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