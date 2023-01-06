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
    vector <ll> v;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x; v.pb(x);
    }
    sort(all(v));
    ll q;
    cin >> q;
    while (q--) {
        ll x, k;
        cin >> x >> k;
        ll ans = 0;
        for (int i = n-1; i >= 0; i-- ) {
            if (v[i] >= x) {ans++; continue;}
            if ((v[i] + k) < x) break;
            else {
                
                k = k - (x - v[i]);
                if (k < 0) {
                    break;
                }
                ans++;
            }
        }

        cout << ans << endl;

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