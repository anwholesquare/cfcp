#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector<ll> v (n,0);
    ll max1 = 0, max2 = 0;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        if (v[i] >= max1) { max2 = max1; max1 = v[i];}
        else if (v[i] > max2) {max2 = v[i];}
    }
    if (n == 1 && v[0] > 1) {
        cout << "NO\n"; return;
    } 
    ll diff = max1 - max2;
    if (diff == 1 || diff == 0) {
        cout << "YES\n";
    }else{
        cout << "NO\n";
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