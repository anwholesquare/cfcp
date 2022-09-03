#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    ll neg = 0;
    vector<ll> v(n,0);    
    for (int i  =0; i< n; i++) {
        ll x;
        cin >> x;
        if (x < 0) neg++;
        v[i] = abs(x);
    }

    for (int i =0; i<neg-1; i++) {
        if (v[i] >= v[i+1]) continue;
        else {cout << "NO\n"; return;}
    }

    for (int i =neg; i <n-1; i++) {
        if (v[i] <= v[i+1]) continue;
        else {cout << "NO\n"; return;}
    }

    cout << "YES\n";
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