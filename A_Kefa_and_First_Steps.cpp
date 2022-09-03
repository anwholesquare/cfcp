#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector <ll> v;
    ll maxcnt = 0;
    ll cnt = 1;
    ll y;
    cin >> y;
    v.push_back(y);

    for (int i =1; i < n; i++) {
        ll x;
        cin >> x;
        
        if (x >= v[i-1]) {
            cnt++;
        }else {
            if (cnt > maxcnt) {
                maxcnt = cnt;
            }
            cnt = 1;
        }
        v.push_back(x);
    }
    cout << max(cnt,maxcnt) << endl;

}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}