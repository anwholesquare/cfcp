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
    cin >>n;
    ll k;
    cin >> k;
    vector<pair <ll, ll>> v;
    vector<ll> v1, v2;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v1.pb(x);
    }

    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        v2.pb(x);
    }

    for (int i =0; i<n; i++) {
        v.pb(make_pair(v2[i], v1[i]));
    }
    sort (all(v));
    for (int i =0; i<n; i++) {
        v1[i] = v[i].second;
    }
    
    int killed = 0;
    ll hit = k;
    while (k > 0) {
        //killed = upper_bound(v1.begin() + killed, v1.end(), hit) - v1.begin();
        while (killed < n && v1[killed] <= hit) killed++;
        if (killed >= n) {
            cout << "YES\n"; return;
        }
        k = k - v[killed].first;
        hit += k;
    }
    cout << "NO\n"; return;


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