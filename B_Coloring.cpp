#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;



void solve () {
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> v;
    for (int i=0; i <m; i++) {
        ll x;
        cin >> x;
        v.pb(x);
    }
    if (k > m) { cout << "NO\n"; return;}
    sort(all(v), greater<ll>());

    ll start = 1;
    for(int i =0; i<k; i++) {
        ll hm = ((n-start)/k) + 1;
        if (v[i] > hm) {
            cout << "NO\n"; return;
        }
        start++;
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