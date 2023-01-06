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
    map<ll, ll> f;
    for (int i =0; i<n;i++) {
        ll x;
        cin >> x;
        v.pb(x);
        f[x]++;
    }
    ll maxe = *max_element(all(v));
    ll mine = *min_element(all(v));
    ll diff = maxe - mine;

    if (diff == 0) {
        cout << f[maxe]*(f[maxe]-1) << endl; return;
    }
    cout << f[maxe]*f[mine]*2 << endl;
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