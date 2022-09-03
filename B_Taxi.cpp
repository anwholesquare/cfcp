#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    map <ll,ll> mp;
    for (ll i = 0; i <n; i++) {
        ll x; cin >> x;
        mp[x]++;
    }
    mp[1] = (mp[1] - mp[3] >= 0) ? mp[1] - mp[3] : 0; 
    ll gm1 = ceil(mp[1]/4.00);
    ll gm2 = ceil((mp[2]*2/4.00));
    int r = (mp[1] % 4 <= 2 && mp[1] % 4 != 0 && mp[2] > 0 && mp[2] % 2 != 0) ? 1: 0;
    cout << gm1 + gm2 + mp[3] + mp[4] - r << endl;

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