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
    ll cnt = 0;
    for (int i =0; i<n; i++) {
        ll x;
        cin >> x;
        if (i == 0) {f[x-i]++;continue;} 
        cnt += f[x-i];
        f[x-i]++;
    }
    cout << cnt << endl;
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