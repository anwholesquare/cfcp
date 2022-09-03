#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    //cout << s << endl;
    vector<string> v;
    //if (s.size() == 1 && s[0] != 'W') {cout << "NO\n"; return;}
    // if (s[0] != 'W' && (s[1] == 'W') ) {
    //     cout << "NO\n"; return;
    // }
    // if (s[n-1] != 'W' && (s[n-2] == 'W') ) {
    //     cout << "NO\n"; return;
    // }

    bool oneGot = 0;
    //bool onePos = -1;
    int r = 0, b= 0;
    for (int i =0; i <n; i++) {
        if (s[i] != 'W') {
            if (s[i] == 'R') r++;
            else b++;
        }
        else if (s[i] == 'W') {
            //cout << r << " " << b << endl;
            if (r == 0 && b == 0) {
                continue;
            }
            if (r == 0 || b == 0) {
                cout << "NO\n"; return;
            }
            r = 0; b = 0;
        }

        if (i == n-1) {
            if (r == 0 && b == 0) {
                continue;
            }
            if (r == 0 || b == 0) {
                cout << "NO\n"; return;
            }
            r = 0; b = 0;
        }
    }
    cout << "YES\n";

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