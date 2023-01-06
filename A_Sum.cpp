#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    vector <ll> v;
    ll x, y , z;
    cin >> x  >> y >> z;
    v.pb(x);
    v.pb(y);
    v.pb(z);
    sort(all(v));
    if (v[2] == (v[1] + v[0]) ) {
        cout << "YES\n";
    }else {
        cout << "NO\n";
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