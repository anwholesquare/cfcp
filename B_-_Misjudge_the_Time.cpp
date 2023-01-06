#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    ll h, m;
    cin >> h >> m;
    ll a[4];
    a[0] = h / 10;
    a[1] = h % 10;
    a[2] = m / 10;
    a[3] = m % 10;
    while (a[0]*10 + a[2] > 23 || a[1] * 10 + a[2] > 59 ) {
        a[3]++;
        if ( a[3] > 9) {
            m = a[2] * 10 + a[3];
            if (m> 59) {
                m = 0;
                h++;
                if (h > 23) {
                    h = h % 24;
                }
            }
            a[0] = h / 10;
            a[1] = h % 10;
            a[2] = m / 10;
            a[3] = m % 10;
        }
    }
    cout << a[0]*10 + a[1] << " " << a[2]*10 + a[3] << endl;
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(0);
    int t = 1;
    //cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}