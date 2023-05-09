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
    vector<ll> v(n+1);
    map <int, int> f;
    bool sorted = 1;
    int wrn = 0;
    for (int i =1; i<=n; i++)  {
        cin >> v[i]; f[v[i]] = i;
        if (v[i] != i) sorted = 0;
    }

    if (sorted) {
        cout << 0 << endl; return;
    }else {
        if (n == k) { cout << 1 << endl; return;}
        else {
            int saved = 0;
            for (int i=2; i<=n; i++) {
                if (f[i] > f[i-1]) continue;
                else {saved = i-1; break;}
            }
            cout << ceil((n-saved)/(k*1.00)) << endl;
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