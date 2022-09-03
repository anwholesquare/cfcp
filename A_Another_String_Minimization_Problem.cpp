#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n, m;
    cin >> n >> m;
    vector<bool> v(m, 0);
    
    for (int i = 0; i<n; i++) {
        ll x;
        cin >> x;
        ll t1 = x - 1;
        ll t2 = m - x;

        ll mi = min (t1, t2);
        ll ma = max (t1, t2);

        if (v[mi] == 1) {
            v[ma] = 1;
        }else{
            v[mi] = 1;
        }
          
    }

    for (int i =0; i<m; i++) {
        if (v[i] == 0) cout << "B";
        else cout << "A";
    }
    cout << endl;


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