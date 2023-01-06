#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n, k;
    cin >> n >> k;

    if (k == 1) {
        for (int i =1; i<=n; i++) {
            cout << i << " ";
        }
        cout << endl;
        return;
    }
    vector<ll> v(n, 0);
    for (int i =0; i< n;i++){
        v[i] = i+1;
    }
    vector<ll> res(n, 0);
    for (int i = 0; i<n; i+=k) {
        res[i] = v.back();
        v.pop_back();
    }

    for (int i = k-1; i<n; i+=k) {
        res[i] = v.front();
        v.erase(v.begin());
    }
    int r = 0;
    for (int i =0; i<n; i++) {
        if (res[i] == 0) {
            cout << v[r] << " ";
            r++;
            r = r % v.size();
        }else {
            cout << res[i] << " ";
        }
    }

    cout << endl;
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