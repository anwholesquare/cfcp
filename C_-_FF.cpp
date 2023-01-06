#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, q;
    cin >> n >> q;
    vector<ll> v;
    map <ll, map <ll, bool> > f;
    for (int i=0; i< q; i++) {
        ll t, x, y;
        cin >> t >> x >> y;
        // 100 - follow
        if (t==1) {
            (f[x])[y] = 1;
        }
        else if (t == 2) {
            (f[x])[y] = 0;
        }else {
            if ( (f[x])[y] == 1 && (f[y])[x] == 1) {
                cout << "Yes\n";
            }else {
                cout << "No\n";
            }
        }
    }

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