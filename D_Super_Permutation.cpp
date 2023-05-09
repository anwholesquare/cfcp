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
    if (n == 1) {
        cout << "1" << endl; return;
    }
    if (n > 1 && n % 2 == 1) {
        cout << -1 << endl; return;
    }

    ll x = n, y = 1;
    for (int i=0; i< n/2; i++) {
        cout << x << " " << y << " ";
        x -= 2; y += 2;
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