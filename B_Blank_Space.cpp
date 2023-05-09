#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
using namespace std;
typedef long long ll;

void solve () {
    int n;
    cin >> n;
    ll mcnt = 0;
    ll cnt = 0;
    for (int i =0; i<n; i++) {
        int x;
        cin >> x;
        if (x == 0) cnt++;
        else {mcnt = max(mcnt, cnt); cnt = 0; }
    }
    mcnt = max(mcnt, cnt); cnt = 0; 
    cout << mcnt << endl;

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