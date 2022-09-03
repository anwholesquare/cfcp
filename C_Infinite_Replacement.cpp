#include <bits/stdc++.h>
using namespace std;

void solve () {
    string s, t;
    cin >> s >> t;
    long long n = s.size();
    if (t == "a") {
        cout << 1 << endl; return;
    }
    if (t.size() == 1) {
        cout <<  (long long ) pow(2,n) << endl; return;
    }
    for (int i = 0; i < t.size(); i++) {
        if (t[i] == 'a') {
            cout << "-1" << endl; return;
        }
    }

    cout << (long long) pow(2,n) << endl;

}

int main () {

    int t;cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}