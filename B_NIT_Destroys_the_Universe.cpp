#include <bits/stdc++.h>
using namespace std;

int main () {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector <long long> v;
        int cnt = 0;
        bool started = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x; v.push_back(x);
            if (v[i] > 0 && started == 0) started = 1;
            else if ( v[i] == 0 && started == 1) {started = 0; cnt++;}
        }
        if (started) cnt++;
        if (cnt > 2) cout << 2 << endl;
        else cout << cnt << endl;
    }

    return 0;
}