#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    string s;
    cin >> s;
    ll n = s.size();
    ll cnt =0;
    for (int i =0; i<n;i++) {
        if (s[i] == '1') {cnt++; if (cnt >= 7) {cout << "YES\n"; return;}}
        else {cnt =0;}
    }
    cnt = 0;
    for (int i =0; i<n;i++) {
        if (s[i] == '0') {cnt++; if (cnt >= 7) {cout << "YES\n"; return;}}
        else {cnt =0;}
    }

    cout << "NO\n"; return;

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