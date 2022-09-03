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
    vector<ll> v (n, 0);
    for (int i =0; i<n; i++) {
        cin >> v[i];
    }
    ll cnt = 0;
    for (int i=0; i < k; i++) {
        if (v[i] > k) cnt++;
    }

    cout << cnt << endl;


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