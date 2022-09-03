#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    map <ll,int> mp;
    ll ans = 0;
    bool flag = 0;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        mp[x]++;
        if(mp [x] >= 3) {flag = 1; ans = x;}
    }

    if (flag) {
        cout << ans << endl;
    }else{
        cout << -1 << endl;
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