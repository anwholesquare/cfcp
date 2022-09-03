#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector <ll> v;
    for (int i =0; i < n; i++){
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll op = 0;

    for (int i = 1; i <n; i++) {
        op++;
        while (v[i] < v[i-1]) {
            v[i] += v[i];
            op++;
        }
        cout << v[i] << " ";
    }

    cout << op << endl;

    
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