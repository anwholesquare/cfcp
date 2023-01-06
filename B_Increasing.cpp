#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    set<ll> s;
    ll n;
    cin >> n;
    for (int i =0; i <n; i++) {
        ll x;
        cin >> x;
        s.insert(x);
    }

    if (s.size() == n) {
        cout << "YES\n";
    }else {
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