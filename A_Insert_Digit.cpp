#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve () {
    ll n, d;
        cin >> n >> d;

        string s;
        cin >> s;

        for (int i =0; i<n; i++) {
            if ( (s[i]-'0') < d ) {
                s.insert(i, to_string(d));
                cout << s << endl;
                return;
            }
        }
        s.push_back(d+'0');
        cout << s << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();

    }
}