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
    ll gk = 0, gu = 0;
    ll basha = 0;
    for (int i =0; i<n; i++) {
        int x;
        cin >> x;
        if (x == 1) gu++;
        else { gk += gu; gu = 0;}
        int res = (gk==0 ? 0 : (gk/2) + 1);
        basha = max  (basha, gu + res);
    }
    cout << basha << endl;

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