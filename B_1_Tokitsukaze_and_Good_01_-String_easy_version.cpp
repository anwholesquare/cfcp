#include <bits/stdc++.h>
using namespace std;

void solve () {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int op = 0;
    for (int i =0; i<n; i++) {
        char bit = s[i];
        char nonBit = (bit == '1') ? '0' : '1';
        int cnt = 0;
        // cout << "start" << endl;
        // cout << i << endl;
        while (i <= (n-1) && s[i] == bit) {
            cnt++;
            i++;
        }
        // cout << i << " " << cnt << endl;
        // cout << "end" << endl;
        i--;
        if(cnt % 2 == 1) {
            //cout << i << endl;
            s[i] = nonBit;op++;i--;
        }
    }
    cout << op << endl;
}

int main () {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}