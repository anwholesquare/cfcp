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
    if (k < n) {cout << -1 << endl; return;}
    ll diff = k - n +1;

    cout << diff;
    for (int i =1; i<=n; i++) {
        if (i == diff) continue;
        cout << " " << i;
    }
    cout << endl;
    return;



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