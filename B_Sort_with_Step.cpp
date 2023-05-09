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
    vector<ll> v(n+1,0);
    map <ll, ll > m;
    for (int i=1; i<=n; i++) {
        ll x;
        cin >> x;
        v[i] = x;
        m[x] = i;
    }

    if (k == 1) {
        cout << 0 << endl; return;
    }

    int cnt = 0;
    for (ll i =1; i<=n; i++) {
        ll d = m[i];
        ll t = d % k;
        ll t1 = i % k;
        if (t != t1) {
            cnt++;
            if (cnt > 1) {
                cout << -1 << endl;
                return;
            }
            for (int j = t1; j <= n; j+=k) {
                t = v[j] % k;
                if (t != t1 && v[j] != i) {
                    ll tmp = m[i];
                    m[i] = j;
                    m[v[j]] = tmp;
                    swap(v[j], v[tmp]);
                    i--;
                    break;
                }
            }
            
        }
    }

    if (cnt == 0) {
        cout << 0 << endl;
    }else {
        cout << 1 << endl;
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