#include <bits/stdc++.h>
using namespace std;

void solve () {
    long long a, b ,c;
    cin >> a >> b >> c;
    cout << (a+b+c) << " " << (b+c) << " " << c << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}