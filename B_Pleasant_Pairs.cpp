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
    v.pb(-1);
    ll x;
    cin >> x;
    v.pb(x);
    ll cnt = 0;
    for (int i=2; i<=n; i++) {
        cin >> x;
        v.pb(x);
        if (x <= (2*i-1)) {
            ll s = ((i+1) % x == 0) ?(i+1)/x*1.00 : ((i+1)/x*1.00 + 1);
            for (ll j = x*s;j <= (2*i-1);j += x) {
                if (x*v[j-i] == j){
                    //cout << i << " " << j <<  " " << j-i << endl;
                    cnt++;
                }
            }
        }
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