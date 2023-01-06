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
    ll maxv = -1, minv = INT_MAX;
    ll mini = 0, maxi = 0;
    for (int i = 0; i < n; i++) {
        ll x; cin >> x; v.pb(x);
        if (maxv < x) {maxi = i; maxv = x;}
        if (minv > x) {mini = i; minv = x;}
    }
    if (minv == maxv) {cout << 0 << endl; return;}
    vector<ll> ps; // ps = probable solution
    for (int i =0; i <n-1; i++) {
        ps.pb(v[i] - v[i+1]);
    }
    ps.pb(v[n-1] - v[0]);
    ps.pb(maxv - v[0]);
    ps.pb(v[n-1] - minv);

    cout << *max_element(all(ps)) << endl;
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