#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;


void swaper (ll &a , ll &b) {
    ll temp = a;
    a = b; b = temp;
}
void solve () {
    ll n;
    cin >> n;

    cout << n << endl;

    vector<ll> v (n+1, 0);
    for (int i =1; i<=n; i++) {
        v[i] = i;
        cout << i << " ";
    }
    cout << endl;
    ll k = n;
    while (true) {
        if (k == 1) break;
        swaper (v[k], v[k-1]);
        //cout << v[k] << endl;
        k--;
        for (int i =1; i<=n; i++) {
            cout << v[i] << " ";
        }
        cout << endl;   
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