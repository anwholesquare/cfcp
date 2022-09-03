#include <bits/stdc++.h>
using namespace std;

void solve () {
    string s;
    cin >> s;
    int t[6];
    for (int i =0; i<6; i++) {
        t[i] = s[i] - '0';
    }

    int sum = t[0] + t[1] + t[2];
    int sum2 = t[3] + t[4] + t[5];
    if (sum == sum2) cout << "YES\n";
    else cout << "NO\n";
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}