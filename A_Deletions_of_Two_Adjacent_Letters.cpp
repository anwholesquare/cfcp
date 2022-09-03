#include <bits/stdc++.h>
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx2,tune=native")
using namespace std;
typedef long long ll;

void solve () {
    string s;
    char c;
    cin >> s; 
    cin >> c;
    for (int i =0; i<s.size(); i+=2) {
        if (s[i] == c) {
            cout << "YES\n"; return;
        }
    }

    cout << "NO\n"; return;

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