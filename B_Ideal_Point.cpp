#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll n,k;
    cin >> n >> k;
    map <int, int> f1, f2;
    for (int i =0; i<n; i++) {
        ll a, b;
        cin >> a >> b;
        f1[a]++; f2[b]++;
    }
    if (f1[k] > 0 && f2[k] > 0) {
        cout << "YES" << endl;
        return;
    }else {
        cout << "NO" << endl;
        return;
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