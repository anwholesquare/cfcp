#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    map <ll, ll> f;
    for (int i = 0; i < n; i++){
        ll x;
        cin >> x;
        f[x]++;
    }

    ll res =  n-(f[0]);
    if (res >= (f[0]-1)) {
            cout << 0 << endl; return;
    }
    for (int i =1; i<=100; i++) {
        res =  n-(f[i]+f[0]);
        if (f[i] == 0 || res >= 1) {
            cout << i << endl; return;
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