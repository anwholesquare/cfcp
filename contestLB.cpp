#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, c;
    cin >> n >> c;
    vector<ll> v;
    ll cost = 0;
    map <ll, ll> f;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        f[x]++;
    }
    for (map <ll,ll>::iterator it = f.begin(); it != f.end(); it++) {
        if ( it->second >= c) cost += c;
        else cost += it->second;
    }
    cout << cost << endl;
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