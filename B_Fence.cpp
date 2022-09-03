#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    ll k;
    cin >> n >> k;

    vector<ll> v (n, 0);
    cin >> v[0];
    for (int i =1; i<n; i++) {
        cin >> v[i];
        v[i] = v[i] + v[i-1];
    }
    ll minx = INT_MAX;
    ll index = -1;
    for (int i = 0; i<= n-k; i++) {
        ll x = (i == 0) ? 0: v[i-1];
        ll y = v[i+k-1]- x;
        //cout << "ANS: " <<  y << endl;
        if (minx > y) {
            minx = y;
            index = i;
        }
    }

    cout << index+1 << endl;
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