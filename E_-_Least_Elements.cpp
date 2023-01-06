#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, m, k;
    cin >> n >> m >> k;
    map <ll, int> f, f1;
    vector<ll> v, v1;
    vector<ll> pv;
    pv.pb(0);
    for (int i=0; i<n;i++) {
        ll x;
        cin >>x;
        v.pb(x);
        f[x] = i;
    }
    v1 = v;
    sort(all(v));
    for (int i =0; i<n; i++) {
        f1[v[i]] = i;
        pv.pb(pv[i] + v[i]);
    }
    ll sum =0;
    for (int i =0; i<n-m+1; i++) {
        sum =0;
        vector<ll> d;
        for (int j = i; j <i+m; j++) {
            d.pb(v1[j]);
        }
        sort(all(d));
        for (int i=0; i<k;i++) sum += d[i];
        cout << sum << " ";
    }
    cout << endl;



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