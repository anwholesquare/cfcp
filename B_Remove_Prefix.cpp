#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    map <ll, ll> mp;
    ll ext = 0, res = 0;
    vector<ll> v (n);

    for (ll i = 0; i<n; i++) {
        ll x;
        cin >> x;
        v[i] = x;
        if (mp[x] > 0) {ext++;}
        mp[x]++;
    }

    if (ext == 0) {
        cout << 0 << endl; return;
    }
    ll i;
    for ( i = 0; i<n; i++) {
        
        if (mp[v[i]] > 1) {
            ext--;
            mp[v[i]]--;
            if (ext == 0) {
                cout << i+1 << endl; return;
            }
        }
        
        
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