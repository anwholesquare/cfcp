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

    int a[n][n];
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

    if (n == 1) {
            cout << "YES\n";
            return;
    }

    ll cnt = 0;
    for (int i = 0; i < n/2; i++) {
        for (int j = 0; j < n; j++) {
            if( a[n-i-1][n-j-1] != a[i][j]) {
                cnt++;
            }
        }
    }

    if (n % 2 == 1) {
            for (int j = 0; j < n / 2; j++) {
                if (a[n / 2][j] != a[n / 2][n - j - 1]) {
                    cnt++;
                }
            }
    }
    if (cnt > k) {
            cout << "NO\n";
    } else {
        k -= cnt;
        if (k % 2 == 0 || n % 2 == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
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



