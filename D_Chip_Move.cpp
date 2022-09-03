#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

map <ll, ll> mp;
ll n;
ll mod = 998244353;

void doer (ll start, ll k) {
    if (k > n) return;
    for (int i = 1; (start + i*(k)) <= n; i++) {
            ll visited = start + i*k;
            if (mp[visited] == mod) mp[visited] = 0; 
            mp[visited]++;
            doer (visited, k+1);
    }
}

void solve () {
    ll k;
    cin >> n >> k;
    
    doer(0,k);

    for (int i = 1; i<=n; i++) {
        cout << mp[i] << " ";
    }

    cout << endl; return;



}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;

    while (t--) {
        solve();
    }
    return 0;
}