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
    string s;
    cin >> s;
    ll l = 0, r = 0;
    for (int i =0; i<n; i++) {

        if (s[i] == 'L') {
            l++;
            if (i+1 < n && s[i+1] == 'R') {
                cout << i+1 << endl;return;
            }
        }
        else {
            r++;
            if (i+1 < n && s[i+1] == 'L') {
                cout << 0 << endl;return;
            }
        }
    }

    if (l == 0 || r == 0) { cout << -1 << endl;}
    else {
        cout << 0 << endl;
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