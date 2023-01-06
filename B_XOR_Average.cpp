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
    if (n % 2 == 1) {
        for (int i =0; i<n; i++) cout << 1 << " ";
        cout << endl;
        return;
    }
    else if ( n== 2) {
        cout << 1 << " " << 3 << endl;
    }
    else {
        cout << "1 2 3 ";
        for (int i =4; i<=n; i++) {
            cout << 2 << " ";
        }
        cout << endl;
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