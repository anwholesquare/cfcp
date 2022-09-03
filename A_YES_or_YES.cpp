#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    for (int i =0; i <3; i++) s[i] = toupper(s[i]);
    if (s == "YES") cout << "YES\n";
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