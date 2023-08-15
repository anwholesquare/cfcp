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
    vector<ll> v(n);
    map <ll, ll> m;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        m[v[i]]++;
    }
    sort (all(v));
    ll d = m[v[n-1]];
    if (d >= n) {
        cout << -1 << endl; return;
    }else {
        cout << n - d << " " << d << endl;
        for (int i =0; i < (n-d); i++) {
            cout << v[i] << " ";
        }
        cout << endl;
        for (int i=n-d; i<n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;
    }



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