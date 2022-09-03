#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;



void solve () {
    ll n;
    cin >> n;
    vector<ll> v(n, 1);
    ll x = 0;
    for (int i =0; i<n; i++) {
        cin >> v[i];
        x += (v[i] - 1);
    }

    if (x % 2 == 1) {
        cout << "errorgorn" << endl;
    }else{
        cout << "maomao90" << endl;
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