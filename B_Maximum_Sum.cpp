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
    ll k;
    cin >> k;
    vector<ll> v;
    for (int i=0; i <n; i++) {
        ll x;
        cin >> x;
        v.pb (x);
    }

    sort(all(v));
    vector<ll> vp;
    vp.pb(0);
    for (int i =0; i <n; i++) {
        vp.pb(v[i] + vp[i]);
    }
    ll m = 0;
    // 2m to (n-k+m)
    // 2m = n; m = n/2; 

    ll sum = 0;
    for (int m =0; m <= k; m++) {
        sum = max(vp[n-k+m] - vp[2*m], sum);
    }
    cout << sum << endl;
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