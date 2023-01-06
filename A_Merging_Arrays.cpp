#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector<ll> l(n+1, 0), r(m+1, 0), v(n+m, 0);
    for (int i=0; i<n; i++) cin >> l[i];
    for (int i =0; i<m; i++) cin >> r[i];
    l[n] = INT_MAX;
    r[m] = INT_MAX;
    int i = 0, j = 0;
    for (int k = 0; k < m+n; k++) {
        if (l[i] < r[j]) { v[k] = l[i]; i++;}
        else {v[k] = r[j]; j++;}
    }

    for (int i =0; i < m+n; i++) cout << v[i] << " ";
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