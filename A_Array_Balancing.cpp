#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    vector <ll> v1(n,0) , v2(n,0);
    for (int i = 0; i<n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i<n; i++) {
        cin >> v2[i];
        if (v1[i] > v2[i]) {
            swap(v1[i], v2[i]);
        }
    }
    ll sum = 0;
    for (int i = 0; i<n-1; i++) {
        sum += abs(v1[i] - v1[i+1]);
        sum += abs(v2[i] - v2[i+1]);
    }
    cout << sum << endl;

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