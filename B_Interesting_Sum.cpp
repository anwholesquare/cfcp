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
    vector <ll> v;
    for (int i =0; i < n; i++) {
        ll x; cin >> x; v.pb(x);
    }
    sort (all(v));
    // for (int i =0; i <n; i++) {
    //     cout << v[i] << " ";
    // }
    //cout << endl;
    // ll c = *max_element(all(v)) - *min_element(all(v));
    // ll d = *max_element(v.begin() + 1, v.end()) - *min_element(v.begin() +1, v.end());
    // ll e = *max_element(v.begin(), v.end()-1) - *min_element(v.begin(), v.end()-1);
    // cout << c + max(d,e) << endl;
    cout << (v[n-1] - v[0]) + (v[n-2] - v[1]) << endl;


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